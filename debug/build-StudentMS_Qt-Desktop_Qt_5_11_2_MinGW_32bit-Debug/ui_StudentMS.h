/********************************************************************************
** Form generated from reading UI file 'StudentMS.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTMS_H
#define UI_STUDENTMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentMS
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionAdd;
    QAction *actionAbout;
    QAction *actionSave;
    QAction *actionAlter;
    QAction *actionDelete;
    QAction *actionSortID;
    QAction *actionSortName;
    QAction *actionPrint;
    QAction *actionSaveAs;
    QAction *actionTabBar;
    QAction *actionWindow;
    QAction *actionSascadeSubWindows;
    QAction *actionTileSubWindows;
    QAction *actionSort;
    QAction *actionFilter;
    QAction *actionToolbar;
    QAction *actionStatus;
    QAction *actionOriginQss;
    QAction *actionQssBlue;
    QAction *actionLogout;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_6;
    QMenu *menu_3;
    QMenu *menu_7;
    QMenu *menu_4;
    QMenu *menu_5;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *StudentMS)
    {
        if (StudentMS->objectName().isEmpty())
            StudentMS->setObjectName(QStringLiteral("StudentMS"));
        StudentMS->resize(980, 606);
        actionNew = new QAction(StudentMS);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/icon/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(StudentMS);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/icon/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionClose = new QAction(StudentMS);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/icon/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon2);
        actionAdd = new QAction(StudentMS);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/icon/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon3);
        actionAbout = new QAction(StudentMS);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/icon/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon4);
        actionSave = new QAction(StudentMS);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon5);
        actionAlter = new QAction(StudentMS);
        actionAlter->setObjectName(QStringLiteral("actionAlter"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/icon/alert.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlter->setIcon(icon6);
        actionDelete = new QAction(StudentMS);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icon/icon/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon7);
        actionSortID = new QAction(StudentMS);
        actionSortID->setObjectName(QStringLiteral("actionSortID"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icon/icon/sort.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortID->setIcon(icon8);
        actionSortName = new QAction(StudentMS);
        actionSortName->setObjectName(QStringLiteral("actionSortName"));
        actionSortName->setIcon(icon8);
        actionPrint = new QAction(StudentMS);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icon/icon/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon9);
        actionSaveAs = new QAction(StudentMS);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icon/icon/saveAs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon10);
        actionTabBar = new QAction(StudentMS);
        actionTabBar->setObjectName(QStringLiteral("actionTabBar"));
        actionWindow = new QAction(StudentMS);
        actionWindow->setObjectName(QStringLiteral("actionWindow"));
        actionSascadeSubWindows = new QAction(StudentMS);
        actionSascadeSubWindows->setObjectName(QStringLiteral("actionSascadeSubWindows"));
        actionTileSubWindows = new QAction(StudentMS);
        actionTileSubWindows->setObjectName(QStringLiteral("actionTileSubWindows"));
        actionSort = new QAction(StudentMS);
        actionSort->setObjectName(QStringLiteral("actionSort"));
        actionSort->setIcon(icon8);
        actionFilter = new QAction(StudentMS);
        actionFilter->setObjectName(QStringLiteral("actionFilter"));
        QIcon icon11;
        icon11.addFile(QStringLiteral("../exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFilter->setIcon(icon11);
        actionToolbar = new QAction(StudentMS);
        actionToolbar->setObjectName(QStringLiteral("actionToolbar"));
        actionToolbar->setCheckable(true);
        actionStatus = new QAction(StudentMS);
        actionStatus->setObjectName(QStringLiteral("actionStatus"));
        actionStatus->setCheckable(true);
        actionOriginQss = new QAction(StudentMS);
        actionOriginQss->setObjectName(QStringLiteral("actionOriginQss"));
        actionQssBlue = new QAction(StudentMS);
        actionQssBlue->setObjectName(QStringLiteral("actionQssBlue"));
        actionLogout = new QAction(StudentMS);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        actionLogout->setIcon(icon2);
        centralWidget = new QWidget(StudentMS);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));

        gridLayout->addWidget(mdiArea, 1, 0, 1, 1);

        StudentMS->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(StudentMS);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 980, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_6 = new QMenu(menu_2);
        menu_6->setObjectName(QStringLiteral("menu_6"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_7 = new QMenu(menu_3);
        menu_7->setObjectName(QStringLiteral("menu_7"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        StudentMS->setMenuBar(menuBar);
        statusBar = new QStatusBar(StudentMS);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        StudentMS->setStatusBar(statusBar);
        toolBar = new QToolBar(StudentMS);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setIconSize(QSize(25, 25));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        StudentMS->addToolBar(Qt::LeftToolBarArea, toolBar);
        mainToolBar = new QToolBar(StudentMS);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setIconSize(QSize(25, 25));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        StudentMS->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionOpen);
        menu->addAction(actionClose);
        menu->addAction(actionSave);
        menu->addAction(actionSaveAs);
        menu_2->addAction(actionAdd);
        menu_2->addAction(actionAlter);
        menu_2->addAction(actionDelete);
        menu_2->addAction(menu_6->menuAction());
        menu_6->addAction(actionSortID);
        menu_6->addAction(actionSortName);
        menu_3->addAction(actionToolbar);
        menu_3->addAction(actionStatus);
        menu_3->addAction(menu_7->menuAction());
        menu_7->addAction(actionOriginQss);
        menu_7->addAction(actionQssBlue);
        menu_4->addAction(actionTabBar);
        menu_4->addAction(actionWindow);
        menu_4->addAction(actionSascadeSubWindows);
        menu_4->addAction(actionTileSubWindows);
        menu_5->addAction(actionAbout);
        toolBar->addAction(actionAdd);
        toolBar->addAction(actionAlter);
        toolBar->addAction(actionDelete);
        toolBar->addAction(actionSort);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSaveAs);
        mainToolBar->addAction(actionAbout);
        mainToolBar->addAction(actionLogout);

        retranslateUi(StudentMS);

        QMetaObject::connectSlotsByName(StudentMS);
    } // setupUi

    void retranslateUi(QMainWindow *StudentMS)
    {
        StudentMS->setWindowTitle(QApplication::translate("StudentMS", "StudentMS", nullptr));
        actionNew->setText(QApplication::translate("StudentMS", "New", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("StudentMS", "<html><head/><body><p>New</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("StudentMS", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("StudentMS", "Open", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("StudentMS", "Open", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("StudentMS", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionClose->setText(QApplication::translate("StudentMS", "Close", nullptr));
#ifndef QT_NO_TOOLTIP
        actionClose->setToolTip(QApplication::translate("StudentMS", "Close", nullptr));
#endif // QT_NO_TOOLTIP
        actionAdd->setText(QApplication::translate("StudentMS", "Add", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAdd->setToolTip(QApplication::translate("StudentMS", "Add", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionAdd->setShortcut(QApplication::translate("StudentMS", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("StudentMS", "About", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("StudentMS", "About", nullptr));
#endif // QT_NO_TOOLTIP
        actionSave->setText(QApplication::translate("StudentMS", "Save", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("StudentMS", "Save", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("StudentMS", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionAlter->setText(QApplication::translate("StudentMS", "Modify", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAlter->setToolTip(QApplication::translate("StudentMS", "Modify", nullptr));
#endif // QT_NO_TOOLTIP
        actionDelete->setText(QApplication::translate("StudentMS", "Delete", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("StudentMS", "Delete", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDelete->setShortcut(QApplication::translate("StudentMS", "Del", nullptr));
#endif // QT_NO_SHORTCUT
        actionSortID->setText(QApplication::translate("StudentMS", "SortID", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSortID->setToolTip(QApplication::translate("StudentMS", "SortID", nullptr));
#endif // QT_NO_TOOLTIP
        actionSortName->setText(QApplication::translate("StudentMS", "SortName", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSortName->setToolTip(QApplication::translate("StudentMS", "SortName", nullptr));
#endif // QT_NO_TOOLTIP
        actionPrint->setText(QApplication::translate("StudentMS", "Print", nullptr));
#ifndef QT_NO_TOOLTIP
        actionPrint->setToolTip(QApplication::translate("StudentMS", "Print", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionPrint->setShortcut(QApplication::translate("StudentMS", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionSaveAs->setText(QApplication::translate("StudentMS", "SaveAs", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSaveAs->setToolTip(QApplication::translate("StudentMS", "SaveAs", nullptr));
#endif // QT_NO_TOOLTIP
        actionTabBar->setText(QApplication::translate("StudentMS", "TabBar", nullptr));
#ifndef QT_NO_TOOLTIP
        actionTabBar->setToolTip(QApplication::translate("StudentMS", "TabBar", nullptr));
#endif // QT_NO_TOOLTIP
        actionWindow->setText(QApplication::translate("StudentMS", "Window Mode", nullptr));
#ifndef QT_NO_TOOLTIP
        actionWindow->setToolTip(QApplication::translate("StudentMS", "Window Mode", nullptr));
#endif // QT_NO_TOOLTIP
        actionSascadeSubWindows->setText(QApplication::translate("StudentMS", "Overlap", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSascadeSubWindows->setToolTip(QApplication::translate("StudentMS", "Overlap", nullptr));
#endif // QT_NO_TOOLTIP
        actionTileSubWindows->setText(QApplication::translate("StudentMS", "Arrange", nullptr));
#ifndef QT_NO_TOOLTIP
        actionTileSubWindows->setToolTip(QApplication::translate("StudentMS", "Arrange", nullptr));
#endif // QT_NO_TOOLTIP
        actionSort->setText(QApplication::translate("StudentMS", "Sort", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSort->setToolTip(QApplication::translate("StudentMS", "Sort", nullptr));
#endif // QT_NO_TOOLTIP
        actionFilter->setText(QApplication::translate("StudentMS", "Filter", nullptr));
#ifndef QT_NO_TOOLTIP
        actionFilter->setToolTip(QApplication::translate("StudentMS", "Filter", nullptr));
#endif // QT_NO_TOOLTIP
        actionToolbar->setText(QApplication::translate("StudentMS", "Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        actionToolbar->setToolTip(QApplication::translate("StudentMS", "Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        actionStatus->setText(QApplication::translate("StudentMS", "Status", nullptr));
#ifndef QT_NO_TOOLTIP
        actionStatus->setToolTip(QApplication::translate("StudentMS", "Status", nullptr));
#endif // QT_NO_TOOLTIP
        actionOriginQss->setText(QApplication::translate("StudentMS", "Origin", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOriginQss->setToolTip(QApplication::translate("StudentMS", "Origin", nullptr));
#endif // QT_NO_TOOLTIP
        actionQssBlue->setText(QApplication::translate("StudentMS", "Blue theme", nullptr));
#ifndef QT_NO_TOOLTIP
        actionQssBlue->setToolTip(QApplication::translate("StudentMS", "Blue theme", nullptr));
#endif // QT_NO_TOOLTIP
        actionLogout->setText(QApplication::translate("StudentMS", "Logout", nullptr));
#ifndef QT_NO_TOOLTIP
        actionLogout->setToolTip(QApplication::translate("StudentMS", "Logout", nullptr));
#endif // QT_NO_TOOLTIP
        menu->setTitle(QApplication::translate("StudentMS", "Find", nullptr));
        menu_2->setTitle(QApplication::translate("StudentMS", "Edit", nullptr));
        menu_6->setTitle(QApplication::translate("StudentMS", "Sort", nullptr));
        menu_3->setTitle(QApplication::translate("StudentMS", "View", nullptr));
        menu_7->setTitle(QApplication::translate("StudentMS", "Theme", nullptr));
        menu_4->setTitle(QApplication::translate("StudentMS", "Window", nullptr));
        menu_5->setTitle(QApplication::translate("StudentMS", "Help", nullptr));
        toolBar->setWindowTitle(QApplication::translate("StudentMS", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentMS: public Ui_StudentMS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMS_H
