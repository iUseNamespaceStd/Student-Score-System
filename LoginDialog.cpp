#include "LoginDialog.h"
#include "StudentMS.h"
#include "ui_LoginDialog.h"
#include "config.h"
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->UserEdit->setPlaceholderText("Please enter the username");
    ui->PwdEdit->setEchoMode(QLineEdit::Password);
    ui->PwdEdit->setPlaceholderText("Please enter the password");
    ui->PwdEdit->setMaxLength(8);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, [=](){ qDebug("ok or save");});
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, [=](){ qDebug("cancel"); });


}

bool StudentMS:: showLoginBox()
{
    LoginDialog *login = new LoginDialog();
    while(true){
        if(login->exec() == QDialog::Accepted){
            if((login->getUSER()!=USERNAME1 || login->getPWD()!=PASSWORD1) && (login->getUSER()!=USERNAME2 || login->getPWD()!=PASSWORD2) && (login->getUSER()!=USERNAME3 || login->getPWD()!=PASSWORD3) && (login->getUSER()!=USERNAME4 || login->getPWD()!=PASSWORD4) && (login->getUSER()!=USERNAME5 || login->getPWD()!=PASSWORD5)){
                QMessageBox::warning(this,tr("prompt"),
                         tr("Please enter the correct username or password"));
                continue;
            }else{
                QMessageBox::information(this,tr("Success"),
                         tr("Login successful, Welcome!"));
                return true;
            }
        }else if(login->exec() == QDialog::Rejected){
            return false;
        }else{
            return false;
        }
    }

}

LoginDialog::~LoginDialog()
{
    delete ui;
}

QString LoginDialog::getUSER()
{
    return ui->UserEdit->text();
}

QString LoginDialog::getPWD()
{
    return ui->PwdEdit->text();
}
