#ifndef STUINFOTEMPLATE_H
#define STUINFOTEMPLATE_H
#include "QString"
#include "QDebug"

//Templates for student score
class StuInfoTemplate
{
public:
    StuInfoTemplate();
    StuInfoTemplate(QString ID,QString name,QString maths,QString chemistry,QString physics,QString english);

    void showStuInfo();
    void setID(const QString &value);
    void setName(const QString &value);
    void setMaths(const QString &value);
    void setChemistry(const QString &value);
    void setPhysics(const QString &value);
    void setEnglish(const QString &value);

    QString getID() const;
    QString getName() const;
    QString getMaths() const;
    QString getChemistry() const;
    QString getPhysics() const;
    QString getEnglish() const;

private:
    QString ID;
    QString name;
    QString maths;
    QString chemistry;
    QString physics;
    QString english;
};

#endif // STUINFOTEMPLATE_H
