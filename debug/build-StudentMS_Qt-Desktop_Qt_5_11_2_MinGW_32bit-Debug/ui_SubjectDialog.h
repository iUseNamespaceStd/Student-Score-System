/********************************************************************************
** Form generated from reading UI file 'SubjectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECTDIALOG_H
#define UI_SUBJECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StuDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *NameEdit;
    QLabel *StuID;
    QLineEdit *IDEdit;
    QLabel *StuName;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *StuDialog)
    {
        if (StuDialog->objectName().isEmpty())
            StuDialog->setObjectName(QStringLiteral("StuDialog"));
        StuDialog->resize(394, 361);
        buttonBox = new QDialogButtonBox(StuDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(120, 290, 241, 81));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(StuDialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 70, 341, 229));
        gridLayout = new QGridLayout(verticalLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        NameEdit = new QLineEdit(verticalLayoutWidget);
        NameEdit->setObjectName(QStringLiteral("NameEdit"));

        gridLayout->addWidget(NameEdit, 1, 1, 1, 1);

        StuID = new QLabel(verticalLayoutWidget);
        StuID->setObjectName(QStringLiteral("StuID"));

        gridLayout->addWidget(StuID, 0, 0, 1, 1);

        IDEdit = new QLineEdit(verticalLayoutWidget);
        IDEdit->setObjectName(QStringLiteral("IDEdit"));

        gridLayout->addWidget(IDEdit, 0, 1, 1, 1);

        StuName = new QLabel(verticalLayoutWidget);
        StuName->setObjectName(QStringLiteral("StuName"));

        gridLayout->addWidget(StuName, 1, 0, 1, 1);

        StuID->raise();
        StuName->raise();
        NameEdit->raise();
        IDEdit->raise();
        textBrowser = new QTextBrowser(StuDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 341, 61));
        verticalLayoutWidget->raise();
        buttonBox->raise();
        textBrowser->raise();

        retranslateUi(StuDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), StuDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StuDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(StuDialog);
    } // setupUi

    void retranslateUi(QDialog *StuDialog)
    {
        StuDialog->setWindowTitle(QApplication::translate("StuDialog", "Dialog", nullptr));
        StuID->setText(QApplication::translate("StuDialog", "Subject Id", nullptr));
        StuName->setText(QApplication::translate("StuDialog", "Subject Name", nullptr));
        textBrowser->setHtml(QApplication::translate("StuDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#000000;\">Add Subject</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuDialog: public Ui_StuDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTDIALOG_H
