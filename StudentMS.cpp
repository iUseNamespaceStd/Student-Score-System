#include "StudentMS.h"
#include "ui_StudentMS.h"
#include <QtCore>
#include <QtGui>
#include <QTableWidget>
#include <QMdiSubWindow>


StudentMS::StudentMS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StudentMS)
{
    ui->setupUi(this);
    setWindowTitle(tr("Student Score system"));

    ui->mdiArea->setViewMode(QMdiArea::TabbedView); //Tab-bar mode
    ui->mdiArea->setTabPosition(QTabWidget::North); //tab location
    ui->mdiArea->setTabShape(QTabWidget::Rounded); //tab shape
    ui->mdiArea->setTabsClosable(true); //close tab
    ui->mdiArea->setTabsMovable(true); //tab can be moved

    this->tableIndex = -1;


    //Toolbar & status bar
    this->ui->actionToolbar->setChecked(true);
    this->ui->actionStatus->setChecked(true);


}

StudentMS::~StudentMS()
{
    delete ui;
}

int StudentMS::getActiveTalbeIndex()
{
    if(this->ui->mdiArea->activeSubWindow()==nullptr){
        return -1;
    }
    int i = this->WindMap.find(this->ui->mdiArea->activeSubWindow()).value();
    qDebug()<<"This index is"<<i<<endl;
    return i;
}

void StudentMS::closeEvent(QCloseEvent *event)
{
   //ask the event can be closed
    foreach(QMdiSubWindow *window, ui->mdiArea->subWindowList()){
        if(window->isActiveWindow()){
            int i = this->WindMap.find(window).value();
            subWnds[i]->closeEvent(event);
        }
    }
}

void StudentMS::on_actionNew_triggered()
{
    StuSubWindow *newWnd = new StuSubWindow();
    subWnds.push_back(newWnd);
    QMdiSubWindow *child = ui->mdiArea->addSubWindow(newWnd);
    tableIndex++;
    WindMap.insert(child,tableIndex);


    //Name of the new window
    newWnd->resize(700,700);
    newWnd->setWindowTitle(tr("Student score report").arg(tableIndex+1));
    child->resize(700,700);
    child->show();
}

void StudentMS::on_actionAdd_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Prompt"),
                 tr("You have not created or opened a file yet, please do so first."));
        return;
    }
    subWnds[activeIndex]->addLine();
}

void StudentMS::on_actionAbout_triggered()
{
    QMessageBox::about(this, tr("About StudentMS"),
            tr("A Student Score system made by Cedric, Felix, King and Shakib"));
}





void StudentMS::on_actionAlter_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Prompt"),
                 tr("You have not created or opened a file yet, please do so first."));
        return;
    }
    subWnds[activeIndex]->alterLine();
}

void StudentMS::on_actionDelete_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Prompt"),
                 tr("You have not created or opened a file yet, please do so first."));
        return;
    }
    subWnds[activeIndex]->deleteLine();
}

void StudentMS::on_actionSortID_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Prompt"),
                 tr("You have not created or opened a file yet, please do so first."));
        return;
    }
    subWnds[activeIndex]->sortByID();
}

void StudentMS::on_actionSortName_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Prompt"),
                 tr("You have not created or opened a file yet, please do so first."));
        return;
    }
    subWnds[activeIndex]->sortByName();
}

void StudentMS::on_actionClose_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Prompt"),
                 tr("You have not created or opened a file yet, please do so first."));
        return;
    }
    subWnds[activeIndex]->close();
}

void StudentMS::on_actionSave_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Prompt"),
                 tr("You have not created or opened a file yet, please do so first."));
        return;
    }
    subWnds[activeIndex]->saveFile();
}


void StudentMS::on_actionSaveAs_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Prompt"),
                 tr("You have not created or opened a file yet, please do so first.。"));
        return;
    }
    subWnds[activeIndex]->saveFileAs();
}


void StudentMS::on_actionOpen_triggered()
{
    //Open file
    //gets the file name and file path, creates a window with this file name and imports its content into a table

    QString fileName;
    fileName = QFileDialog::getOpenFileName(this,tr("Open file"),QDir::currentPath(),tr("Text File (*.txt)"));

    //verify whether the window has been opened and switch the current active window to the opened file
    foreach(QMdiSubWindow *window, ui->mdiArea->subWindowList()){
        if(window->isActiveWindow()){
            int i = this->WindMap.find(window).value();
            if(subWnds[i]->getFilePath() == fileName){
                //The filepath in the current active window
                ui->mdiArea->setActiveSubWindow(window);
                return;
            }
        }
    }


    if(fileName == ""){//If user closes the file with null as the file name, returns directly to the window
        return;
    }
    else{
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
               //Open successful

               //Can only open specfic format files(to prevent errors)
               QTextStream textStream(&file);
               QString lineInfo;
               lineInfo = textStream.readLine();
               if(lineInfo != FILE_KEY){
                   QMessageBox::warning(this,tr("Error"),tr("The file is not compatible"));
                   file.close();
                   return;
               }

               //file of the curren object, can create a new window and import from there
               this->on_actionNew_triggered();
               int activeIndex = this->getActiveTalbeIndex();
               if(activeIndex == -1){
                   QMessageBox::warning(this,tr("Prompt"),
                            tr("You have not created or opened a file yet, please do so first."));
                   return;
               }

               QFileInfo fi = QFileInfo(fileName);
               QStringList sections = fi.fileName().split(QRegExp("[.]"));
               this->ui->mdiArea->activeSubWindow()->setWindowTitle(sections.at(0));
               subWnds[activeIndex]->setWindowTitle(fi.fileName());
               subWnds[activeIndex]->importFile(fileName);

           }
           file.close();
       }
    }
}


void StudentMS::on_actionTabBar_triggered()
{
    ui->mdiArea->setViewMode(QMdiArea::TabbedView);
}

void StudentMS::on_actionWindow_triggered()
{
    ui->mdiArea->setViewMode(QMdiArea::SubWindowView);
}

void StudentMS::on_actionSascadeSubWindows_triggered()
{
    ui->mdiArea-> cascadeSubWindows();
}

void StudentMS::on_actionTileSubWindows_triggered()
{
    ui->mdiArea->tileSubWindows();
}

void StudentMS::on_actionSort_triggered()
{
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Prompt"),
                 tr("You have not created or opened a file yet, please do so first"));
        return;
    }
    subWnds[activeIndex]->sortByUser();
}


void StudentMS::on_actionToolbar_toggled(bool arg1)
{
    if(arg1){
        this->ui->toolBar->show();
        this->ui->mainToolBar->show();
    }else{
        this->ui->toolBar->hide();
        this->ui->mainToolBar->hide();
    }
}

void StudentMS::on_actionStatus_toggled(bool arg1)
{
    if(arg1){
        this->ui->statusBar->show();
    }else{
        this->ui->statusBar->hide();
    }
}


void StudentMS::on_actionOriginQss_triggered()
{
    StyleSelector::setStyle(":/qss/stylesheet/none.qss");
}

void StudentMS::on_actionQssBlue_triggered()
{
    StyleSelector::setStyle(":/qss/stylesheet/studentMS.qss");
}



void StudentMS::on_actionLogout_triggered()
{
    QMessageBox::information(this,"Prompt","You are now logged out.");
    close();
}

