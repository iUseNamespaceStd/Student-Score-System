#include "StuInfoTemplate.h"

StuInfoTemplate::StuInfoTemplate()
{
    this->ID = "";
    this->name = "";
    this->maths = "";
    this->chemistry = "";
    this->physics = "";
    this->english = "";
}

StuInfoTemplate::StuInfoTemplate(QString ID, QString name, QString maths, QString chemistry, QString physics, QString english)
{
    this->ID = ID;
    this->name = name;
    this->maths = maths;
    this->chemistry = chemistry;
    this->physics = physics;
    this->english = english;
}

void StuInfoTemplate::showStuInfo()
{
    qDebug()<<"ID:"<<ID
            <<" name:"<<name
            <<" maths:"<<maths
            <<" chemistry:"<<chemistry
            <<" physics:"<<physics
            <<" english:"<<english
           <<endl;
}

QString StuInfoTemplate::getID() const
{
    return ID;
}

void StuInfoTemplate::setID(const QString &value)
{
    ID = value;
}

QString StuInfoTemplate::getName() const
{
    return name;
}

void StuInfoTemplate::setName(const QString &value)
{
    name = value;
}

QString StuInfoTemplate::getMaths() const
{
    return maths;
}

void StuInfoTemplate::setMaths(const QString &value)
{
    maths = value;
}

QString StuInfoTemplate::getChemistry() const
{
    return chemistry;
}

void StuInfoTemplate::setChemistry(const QString &value)
{
    chemistry = value;
}

QString StuInfoTemplate::getPhysics() const
{
    return physics;
}

void StuInfoTemplate::setPhysics(const QString &value)
{
    physics = value;
}

QString StuInfoTemplate::getEnglish() const
{
    return english;
}

void StuInfoTemplate::setEnglish(const QString &value)
{
    english = value;
}
