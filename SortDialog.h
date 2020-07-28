#ifndef SORTDIALOG_H
#define SORTDIALOG_H

#include <QDialog>

namespace Ui {
class SortDialog;
}

//User-sorted dialog box
class SortDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SortDialog(QWidget *parent = nullptr);
    ~SortDialog();
    int getSortTarget();    //Sorted objects
    int getSortOrder();     //Sorted(Ascending/Descending order)

private:
    Ui::SortDialog *ui;
};

#endif // SORTDIALOG_H
