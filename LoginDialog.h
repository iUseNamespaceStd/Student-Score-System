#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

//Dialog box for user login
class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();
    QString getUSER();  //Get username
    QString getPWD();   //Get password

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
