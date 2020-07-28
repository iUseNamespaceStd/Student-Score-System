#include "StuSubWindow.h"
#include "ui_StuSubWindow.h"

StuSubWindow::StuSubWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StuSubWindow)
{
    ui->setupUi(this);
    //Member variable initialization
    this->tb = ui->tableWidget; //Points to a table
    this->filePath = "";        //File path
    this->flagModified = false;  //Modification chec
    this->stuSorter = new SortDialog();


    //Features of the table
    tb->setSelectionBehavior(QAbstractItemView::SelectRows);    //How the whole line is selected
    tb->setSelectionMode (QAbstractItemView::SingleSelection);  //Select a single line
    tb->setEditTriggers(QAbstractItemView::NoEditTriggers);     //Disable editing for cells
    //Allows double click to change the value in table
    connect(tb,SIGNAL(on_tableWidget_cellDoubleClicked(int,int)),this,SLOT(on_tableWidget_cellDoubleClicked(int,int)));

    QHeaderView *headerGoods = tb->horizontalHeader();
    headerGoods->setSortIndicator(0, Qt::AscendingOrder);
    headerGoods->setSortIndicatorShown(true);
    connect(headerGoods, SIGNAL(sectionClicked(int)), tb, SLOT (sortByColumn(int)));
}

StuSubWindow::~StuSubWindow()
{
    delete ui;
}

void StuSubWindow::addLine()
{
    StuDialog *dialog = new StuDialog();
    if(dialog->exec() == QDialog::Accepted)
    {
        this->flagModified = true;

        QVector<QString> res = dialog->getInput();
        //ID is the same and cannot be added repeatedly
        QString ID = res[0];
        if(this->primaryKeyConfilct(ID,-1)){
            return;
        }
        //Adding new item
        int row_count = tb->rowCount(); //Get the number of table single lines
        tb->insertRow(row_count); //Insert a new row
        for(int i=0;i<=5;i++){
            QTableWidgetItem *newItem = new QTableWidgetItem();
            newItem->setText(res[i]);
            tb->setItem(row_count,i,newItem);
        }
    }
}

void StuSubWindow::alterLine()
{
    int rowCur = tb->currentRow();
    qDebug()<<"Modified number is："<<rowCur<<endl;
    if(rowCur>=0){
        on_tableWidget_cellDoubleClicked(rowCur,0);
    }
}

void StuSubWindow::deleteLine()
{
    this->flagModified = true;
    int rowCur = tb->currentRow();
    qDebug()<<"Deleted number is:"<<rowCur<<endl;
    if(rowCur>=0){
        tb->removeRow(rowCur);
    }
}

void StuSubWindow::sortByID()
{
    this->flagModified = true;
    tb->sortItems(0);
}

void StuSubWindow::sortByName()
{
    this->flagModified = true;
    tb->sortItems(1);
}

void StuSubWindow::sortByUser()
{
    if(stuSorter->exec()==QDialog::Accepted){
        int col =stuSorter->getSortTarget();
        switch (stuSorter->getSortOrder()) {
            case 0:this->tb->sortItems(col,Qt::AscendingOrder);break;
            case 1:this->tb->sortItems(col,Qt::DescendingOrder); break;
        }
    }
}



bool StuSubWindow:: QString_Matches(
    const QString& str,
    const QString& pattern,
    const Qt::MatchFlags& flags)
{
    if(flags.testFlag(Qt::MatchRegExp) == true)
    {
        QRegularExpression::PatternOptions options = QRegularExpression::NoPatternOption;
        if(flags.testFlag(Qt::MatchCaseSensitive) == false)
        {
            options = QRegularExpression::CaseInsensitiveOption;
        }
        QRegularExpression regex(pattern, options);
        return regex.match(str).hasMatch();
    }
    else
    {
        Qt::CaseSensitivity cs = Qt::CaseSensitive;
        if(flags.testFlag(Qt::MatchCaseSensitive) == false)
        {
            cs = Qt::CaseInsensitive;
        }
        if(flags.testFlag(Qt::MatchContains) == true)
        {
            return str.contains(pattern, cs);
        }
        else
        {
            if(flags.testFlag(Qt::MatchStartsWith) == true)
            {
                if(str.startsWith(pattern, cs) == true)
                {
                    return true;
                }
            }
            if(flags.testFlag(Qt::MatchEndsWith) == true)
            {
                if(str.endsWith(pattern, cs) == true)
                {
                    return true;
                }
            }
            if(flags.testFlag(Qt::MatchFixedString) == true)
            {
                return (str.compare(pattern, cs) == 0);
            }
        }
    }
    return false;
};



bool StuSubWindow::saveFile()
{
    //Save in an already opened file, or save the file in a new file
    if(filePath == ""){
        return this->saveFileAs();
    }else{
        //Put all contents of the table to the filepath
        return this->saveTableTo(filePath);
    }
}

bool StuSubWindow::saveFileAs()
{
    QFileDialog fileDialog;
    QString fileName = fileDialog.getSaveFileName(this,tr("Open File"),"/New form",tr("Text File(*.txt)"));

    if(fileName == ""){
        return false;
    }
    else{
        QString simpleName = this->getFileNameWithoutFormat(fileName);
        this->setWindowTitle(simpleName);   //"Save as" after successful save, can rename window title
        if(this->filePath == ""){
            this->filePath = fileName;        //First Save
        }
        return this->saveTableTo(fileName);
    }
}

bool StuSubWindow::saveTableTo(QString filepath)
{
    QFile file(filepath);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::warning(this,tr("Warning"),tr("Cannot open the file"));
        return false;
    }
    else
    {
        QTextStream textStream(&file);
        textStream.setCodec("UTF-8");
        textStream << FILE_KEY << endl;
        for(int i=0; i <ui->tableWidget->rowCount(); i++)
        {
            for(int j=0; j<=5;j++){
                textStream << ui->tableWidget->item(i,j)->text()<<" ";
            }
            textStream<<endl;
        }
        QMessageBox::information(this,tr("Prompt"),tr("Saved Successfully"));
        this->flagModified = false;
        file.close();
        return true;
    }
}

void StuSubWindow::importFile(QString fileName)
{
    this->filePath = fileName;
    QFileInfo fi = QFileInfo(fileName);
    qDebug()<<fi.fileName()<<endl;
    this->windowTitleChanged(fi.fileName());
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this,tr("Error"),tr("Cannot open file"));
        return;
    }
    else
    {
        if(!file.isReadable())
        {
            QMessageBox::warning(this,tr("Error"),tr("The file is not readable"));
        }
        else
        {
            //the file is opened successfully and the data from the file is imported to be shown on the table
            QTextStream textStream(&file);
            textStream.setCodec("UTF-8");
            QString lineInfo;
            lineInfo = textStream.readLine();

            //file identification(only opens file with a specific format)
            if(lineInfo != FILE_KEY){
                QMessageBox::warning(this,tr("Error"),tr("The file is not compatible"));
                this->close();
                return;
            }
            while(!textStream.atEnd())
            {
                lineInfo = textStream.readLine();
                QStringList newLine = lineInfo.split(QRegExp("[ ]"));
                int row_count = tb->rowCount(); //get the number of rows
                tb->insertRow(row_count); //insert a new row
                for(int i=0;i<=5;i++){
                    QTableWidgetItem *newItem = new QTableWidgetItem();
                    newItem->setText(newLine.at(i));
                    tb->setItem(row_count,i,newItem);
                }
            }
        }
        file.close();
    }
}

StuInfoTemplate StuSubWindow::getTableForRow(int row)
{
    return StuInfoTemplate(tb->item(row,0)->text(), //student id row
                           tb->item(row,1)->text(), //name row
                           tb->item(row,2)->text(), //maths row
                           tb->item(row,3)->text(), //chemistry row
                           tb->item(row,4)->text(), //physics row
                           tb->item(row,5)->text());//english row
}

QString StuSubWindow::getFileNameWithoutFormat(QString filename)
{
    QFileInfo fi(filename);
    QStringList simpleName = fi.fileName().split(QRegExp("[.]"));
    return simpleName.at(0);

}

bool StuSubWindow::primaryKeyConfilct(QString ID,int before)
{
    int curRow = tb->rowCount();
    for(int i=0;i<curRow;i++){
        if(tb->item(i,0)->text() == ID && i!=before){
            QMessageBox::warning(this,tr("error"),tr("Student Id already exists!"));
            return true;
        }
    }
    return false;
}

void StuSubWindow::closeEvent(QCloseEvent *event)
{
    if(this->flagModified) //File modified, option to save prompted before closing
    {
        QMessageBox::StandardButton button;
        QString name = this->windowTitle();
        button=QMessageBox::question(this, tr("Exit"),QString(name+tr("Do you want to save the file?")),QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
        if(button==QMessageBox::No)
        {
            event->accept(); // If not saved, the current window will close directly
        }
        else if(button==QMessageBox::Yes)
        {
            if(this->saveFile()){// Successful save
                event->accept(); //Program exits after accepting exit signal
            }else{
                event->ignore(); // Program continues, it ignores the exit signal
            }
        }
        else if(button==QMessageBox::Cancel)
        {
            event->ignore(); // Program continues, it ignores the exit signal
        }
    }
    else{
        event->accept();
    }

}

void StuSubWindow::on_tableWidget_cellDoubleClicked(int row, int column)
{
    StuInfoTemplate info = getTableForRow(row);
    info.showStuInfo();
    StuDialog *dialog = new StuDialog();
    dialog->setByStuInfo(info);
    if(dialog->exec() == QDialog::Accepted)
    {
        this->flagModified = true;  //The file has been modified and needs to be saved when closed
        QVector<QString> res = dialog->getInput();
        //Same ID, cannot be added repeatedly
        QString ID = res[0];
        if(this->primaryKeyConfilct(ID,row)){
            return;
        }
        //ID does not exist and can be added
        for(int i=0;i<=5;i++){
           tb->item(row,i)->setText(res[i]);
        }
    }
}

QString StuSubWindow::getFilePath() const
{
    return filePath;
}

