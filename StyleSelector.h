#ifndef STYLESELECTOR_H
#define STYLESELECTOR_H

#include <QFile>
#include <QApplication>

//Style Selector
class StyleSelector
{
public:
    StyleSelector();
    //Function that loads the QSS style filepath
    static void setStyle(const QString &style) {
        QFile qss(style);
        qss.open(QFile::ReadOnly);
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }
};

#endif // STYLESELECTOR_H
