#include "StudentMS.h"
#include "StyleSelector.h"
#include <QApplication>
#include <QDebug>
#include <QElapsedTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StyleSelector::setStyle(":/qss/stylesheet/studentMS.qss");
//    StyleSelector::setStyle("H:/Advanced Cpp Programming/StudentMS_Qt/stylesheet/studentMS.qss");

    StudentMS w;
    QElapsedTimer timer;
    timer.start();
    w.show();
    qDebug() << "The running time is" << timer.elapsed();
    if(w.showLoginBox() == false){
        w.close();
        a.closeAllWindows();
        return 0;
    }


    return a.exec();
}
