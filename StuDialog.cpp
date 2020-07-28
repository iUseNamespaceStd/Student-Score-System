#include "StuDialog.h"
#include "ui_StuDialog.h"

StuDialog::StuDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StuDialog)
{
    ui->setupUi(this);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, [=](){ qDebug("ok or save");});
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, [=](){ qDebug("cancel"); });

    ui->MathsEdit->setPlaceholderText("Please enter the Maths scores");
    ui->ChemistryEdit->setPlaceholderText("Please enter the Chemistry score");
    ui->IDEdit->setPlaceholderText("Please enter the Student id");
    ui->NameEdit->setPlaceholderText("Please enter the Student name");
    ui->PhysicsEdit->setPlaceholderText("Please enter the Physics score");
    ui->EnglishEdit->setPlaceholderText("Please enter the English score");


    QWidget::setTabOrder(ui->IDEdit, ui->NameEdit);
    QWidget::setTabOrder(ui->NameEdit, ui->MathsEdit);
    QWidget::setTabOrder(ui->MathsEdit, ui->ChemistryEdit);
    QWidget::setTabOrder(ui->ChemistryEdit, ui->PhysicsEdit);
    QWidget::setTabOrder(ui->PhysicsEdit, ui->EnglishEdit);
    QWidget::setTabOrder(ui->EnglishEdit, ui->buttonBox);
}

StuDialog::~StuDialog()
{
    delete ui;
}

StuInfoTemplate &StuDialog::getStuInfo()
{
    this->stuInfo = StuInfoTemplate(ui->IDEdit->text(),
                                    ui->NameEdit->text(),
                                    ui->MathsEdit->text(),
                                    ui->ChemistryEdit->text(),
                                    ui->PhysicsEdit->text(),
                                    ui->EnglishEdit->text());
    return this->stuInfo;
}




QVector<QString> StuDialog::getInput()
{
    QVector<QString> res;
    res.push_back(ui->IDEdit->text());
    res.push_back(ui->NameEdit->text());
    res.push_back(ui->MathsEdit->text());
    res.push_back(ui->ChemistryEdit->text());
    res.push_back(ui->PhysicsEdit->text());
    res.push_back(ui->EnglishEdit->text());

    return res;
}

void StuDialog::setByStuInfo(StuInfoTemplate info)
{
    ui->IDEdit->setText(info.getID());
    ui->NameEdit->setText(info.getName());
    ui->MathsEdit->setText(info.getMaths());
    ui->ChemistryEdit->setText(info.getChemistry());
    ui->PhysicsEdit->setText(info.getPhysics());
    ui->EnglishEdit->setText(info.getEnglish());
}
