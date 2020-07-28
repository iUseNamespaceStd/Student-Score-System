/********************************************************************************
** Form generated from reading UI file 'LoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *Welcome;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *UserEdit;
    QLabel *UserName;
    QLineEdit *PwdEdit;
    QLabel *Password;
    QLabel *label;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(LoginDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Welcome = new QLabel(LoginDialog);
        Welcome->setObjectName(QStringLiteral("Welcome"));
        Welcome->setGeometry(QRect(80, 30, 281, 91));
        Welcome->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        gridLayoutWidget_2 = new QWidget(LoginDialog);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 120, 333, 121));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        UserEdit = new QLineEdit(gridLayoutWidget_2);
        UserEdit->setObjectName(QStringLiteral("UserEdit"));

        gridLayout_2->addWidget(UserEdit, 0, 1, 1, 1);

        UserName = new QLabel(gridLayoutWidget_2);
        UserName->setObjectName(QStringLiteral("UserName"));

        gridLayout_2->addWidget(UserName, 0, 0, 1, 1);

        PwdEdit = new QLineEdit(gridLayoutWidget_2);
        PwdEdit->setObjectName(QStringLiteral("PwdEdit"));

        gridLayout_2->addWidget(PwdEdit, 1, 1, 1, 1);

        Password = new QLabel(gridLayoutWidget_2);
        Password->setObjectName(QStringLiteral("Password"));

        gridLayout_2->addWidget(Password, 1, 0, 1, 1);

        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 91, 81));

        retranslateUi(LoginDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LoginDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LoginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", nullptr));
        Welcome->setText(QApplication::translate("LoginDialog", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; text-decoration: underline;\">STUDENT SCORE MANAGEMENT</span></p><p align=\"center\">WELCOME!</p></body></html>", nullptr));
        UserName->setText(QApplication::translate("LoginDialog", "Username", nullptr));
        Password->setText(QApplication::translate("LoginDialog", "<html><head/><body><p align=\"right\">Password</p></body></html>", nullptr));
        label->setText(QApplication::translate("LoginDialog", "<html><head/><body><p><img src=\":/icon/icon/softSmall.png\"/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
