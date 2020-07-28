#ifndef STUSUBWINDOW_H
#define STUSUBWINDOW_H

#include <QWidget>
#include <QMessageBox>
#include <QMdiSubWindow>
#include <QTableWidget>
#include <QDebug>
#include <QFileDialog>
#include <QCloseEvent>
#include <QTextCodec>
#include "StuDialog.h"
#include "config.h"
#include "SortDialog.h"

namespace Ui {
class StuSubWindow;
}

//Window that maintains the table of records
class StuSubWindow : public QWidget
{
    Q_OBJECT

public:
    explicit StuSubWindow(QWidget *parent = nullptr);
    ~StuSubWindow();
    void addLine();     //add a row of data
    void alterLine();   //modify a row of data
    void deleteLine();  //delete a row of data
    void sortByID();
    void sortByName();
    void closeFile();
    bool saveFile();
    bool saveFileAs();
    bool saveTableTo(QString filepath);     //Save file to filepath
    void importFile(QString fileName);      //Importing file contents
    void closeEvent(QCloseEvent *event);
    void sortByUser();

    //Processing function with arguments
    StuInfoTemplate getTableForRow(int row);    //get data for a row in a table
    QString getFileNameWithoutFormat(QString filename); //get file name under a path
    bool primaryKeyConfilct(QString ID,int before);    //each student id is unique and prevented from repetition
    QString getFilePath() const;            //get file path
    bool QString_Matches(const QString& str,const QString& pattern,const Qt::MatchFlags& flags);    //check for matching string

private slots:
    void on_tableWidget_cellDoubleClicked(int row, int column);    //double-click an event

private:
    Ui::StuSubWindow *ui;
    QTableWidget* tb;           //table for the current window
    SortDialog *stuSorter;      //sort dialog
    QString filePath;           //file path
    bool flagModified;          //check for modification

};

#endif // STUSUBWINDOW_H
