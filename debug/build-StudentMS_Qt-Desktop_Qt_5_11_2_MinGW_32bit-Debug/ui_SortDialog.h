/********************************************************************************
** Form generated from reading UI file 'SortDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTDIALOG_H
#define UI_SORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_21;
    QComboBox *sortTarget;
    QComboBox *sortOrder;

    void setupUi(QDialog *SortDialog)
    {
        if (SortDialog->objectName().isEmpty())
            SortDialog->setObjectName(QStringLiteral("SortDialog"));
        SortDialog->resize(398, 166);
        buttonBox = new QDialogButtonBox(SortDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 120, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        horizontalLayoutWidget = new QWidget(SortDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 40, 341, 51));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(horizontalLayoutWidget);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_5->addWidget(label_21);

        sortTarget = new QComboBox(horizontalLayoutWidget);
        sortTarget->addItem(QString());
        sortTarget->addItem(QString());
        sortTarget->addItem(QString());
        sortTarget->addItem(QString());
        sortTarget->addItem(QString());
        sortTarget->addItem(QString());
        sortTarget->setObjectName(QStringLiteral("sortTarget"));

        horizontalLayout_5->addWidget(sortTarget);

        sortOrder = new QComboBox(horizontalLayoutWidget);
        sortOrder->addItem(QString());
        sortOrder->addItem(QString());
        sortOrder->setObjectName(QStringLiteral("sortOrder"));

        horizontalLayout_5->addWidget(sortOrder);


        retranslateUi(SortDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SortDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SortDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SortDialog);
    } // setupUi

    void retranslateUi(QDialog *SortDialog)
    {
        SortDialog->setWindowTitle(QApplication::translate("SortDialog", "Dialog", nullptr));
        label_21->setText(QApplication::translate("SortDialog", "Sort by", nullptr));
        sortTarget->setItemText(0, QApplication::translate("SortDialog", "Student ID", nullptr));
        sortTarget->setItemText(1, QApplication::translate("SortDialog", "Name", nullptr));
        sortTarget->setItemText(2, QApplication::translate("SortDialog", "Maths", nullptr));
        sortTarget->setItemText(3, QApplication::translate("SortDialog", "Chemistry", nullptr));
        sortTarget->setItemText(4, QApplication::translate("SortDialog", "Physics", nullptr));
        sortTarget->setItemText(5, QApplication::translate("SortDialog", "English", nullptr));

        sortOrder->setItemText(0, QApplication::translate("SortDialog", "Ascending", nullptr));
        sortOrder->setItemText(1, QApplication::translate("SortDialog", "Descending", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SortDialog: public Ui_SortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTDIALOG_H
