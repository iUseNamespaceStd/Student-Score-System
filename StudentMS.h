#ifndef STUDENTMS_H
#define STUDENTMS_H

#include <QMainWindow>
#include <QMdiSubWindow>
#include <QVector>
#include <QMap>
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QCloseEvent>
#include <QLabel>
#include <QTimer>

#include "StuSubWindow.h"
#include "StuDialog.h"
#include "LoginDialog.h"
#include "StyleSelector.h"

namespace Ui {
class StudentMS;
}

//Subject of the program
class StudentMS : public QMainWindow
{
    Q_OBJECT

public:
    explicit StudentMS(QWidget *parent = nullptr);
    ~StudentMS();
    int getActiveTalbeIndex();  //Number of active window
    bool showLoginBox();//Display login box


protected:
     void closeEvent(QCloseEvent *event);   //closes, prompts to save

private slots:

    void on_actionNew_triggered();
    void on_actionClose_triggered();
    void on_actionSave_triggered();
    void on_actionSaveAs_triggered();
    void on_actionOpen_triggered();



    void on_actionAdd_triggered();
    void on_actionAlter_triggered();
    void on_actionDelete_triggered();
    void on_actionSortID_triggered();
    void on_actionSortName_triggered();
    void on_actionSort_triggered();



    void on_actionToolbar_toggled(bool arg1);
    void on_actionStatus_toggled(bool arg1);



    void on_actionTabBar_triggered();
    void on_actionWindow_triggered();
    void on_actionTileSubWindows_triggered();   //Windows tightly stacked
    void on_actionSascadeSubWindows_triggered();//Windows neatly arranged


    void on_actionAbout_triggered();    //Related information

    //Theme
    void on_actionOriginQss_triggered();    //Original Style
    void on_actionQssBlue_triggered();      //Blue Style


    void on_actionLogout_triggered();


private:
    Ui::StudentMS *ui;
    QVector<StuSubWindow*> subWnds;     //Maintain windows
    QMap<QMdiSubWindow*,int> WindMap;   //Stores the currently active window
    QMap<QString,int> OpenMap;          //Stores the currently open file
    int tableIndex;                     //Number of windows
    QLabel* currentTimeLabel;           //Timestamp

};

#endif // STUDENTMS_H
