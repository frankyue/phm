/********************************************************************************
** Form generated from reading ui file 'record.ui'
**
** Created: Wed Jan 21 22:29:06 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_RECORD_H
#define UI_RECORD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_5;
    QLabel *label_9;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_10;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_8;
    QPushButton *submit;
    QPushButton *cancel;

    void setupUi(QDialog *Dialog)
    {
    if (Dialog->objectName().isEmpty())
        Dialog->setObjectName(QString::fromUtf8("Dialog"));
    Dialog->resize(375, 326);
    gridLayoutWidget = new QWidget(Dialog);
    gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
    gridLayoutWidget->setGeometry(QRect(70, 40, 241, 217));
    gridLayoutWidget->setLayoutDirection(Qt::LeftToRight);
    gridLayout = new QGridLayout(gridLayoutWidget);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
    gridLayout->setContentsMargins(0, 0, 0, 0);
    label_2 = new QLabel(gridLayoutWidget);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setLayoutDirection(Qt::LeftToRight);
    label_2->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(label_2, 1, 0, 1, 1);

    label_6 = new QLabel(gridLayoutWidget);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setLayoutDirection(Qt::LeftToRight);
    label_6->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(label_6, 1, 1, 1, 1);

    label_3 = new QLabel(gridLayoutWidget);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setLayoutDirection(Qt::LeftToRight);
    label_3->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(label_3, 2, 0, 1, 1);

    label_7 = new QLabel(gridLayoutWidget);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setLayoutDirection(Qt::LeftToRight);
    label_7->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(label_7, 2, 1, 1, 1);

    label_14 = new QLabel(gridLayoutWidget);
    label_14->setObjectName(QString::fromUtf8("label_14"));
    label_14->setLayoutDirection(Qt::LeftToRight);
    label_14->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(label_14, 3, 0, 1, 1);

    label_15 = new QLabel(gridLayoutWidget);
    label_15->setObjectName(QString::fromUtf8("label_15"));
    label_15->setLayoutDirection(Qt::LeftToRight);
    label_15->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(label_15, 3, 1, 1, 1);

    label_5 = new QLabel(gridLayoutWidget);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setLayoutDirection(Qt::LeftToRight);
    label_5->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(label_5, 4, 0, 1, 1);

    label_9 = new QLabel(gridLayoutWidget);
    label_9->setObjectName(QString::fromUtf8("label_9"));
    label_9->setLayoutDirection(Qt::LeftToRight);
    label_9->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(label_9, 5, 0, 1, 1);

    lineEdit = new QLineEdit(gridLayoutWidget);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setLayoutDirection(Qt::LeftToRight);
    lineEdit->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(lineEdit, 4, 1, 1, 1);

    lineEdit_2 = new QLineEdit(gridLayoutWidget);
    lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
    lineEdit_2->setLayoutDirection(Qt::LeftToRight);
    lineEdit_2->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(lineEdit_2, 5, 1, 1, 1);

    label_10 = new QLabel(gridLayoutWidget);
    label_10->setObjectName(QString::fromUtf8("label_10"));
    label_10->setLayoutDirection(Qt::LeftToRight);
    label_10->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(label_10, 6, 0, 1, 1);

    lineEdit_3 = new QLineEdit(gridLayoutWidget);
    lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
    lineEdit_3->setLayoutDirection(Qt::LeftToRight);
    lineEdit_3->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(lineEdit_3, 6, 1, 1, 1);

    label = new QLabel(gridLayoutWidget);
    label->setObjectName(QString::fromUtf8("label"));
    label->setLayoutDirection(Qt::LeftToRight);
    label->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(label, 0, 0, 1, 1);

    label_4 = new QLabel(gridLayoutWidget);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setLayoutDirection(Qt::LeftToRight);
    label_4->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(label_4, 0, 1, 1, 1);

    label_8 = new QLabel(Dialog);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setGeometry(QRect(20, 10, 92, 21));
    label_8->setLayoutDirection(Qt::LeftToRight);
    submit = new QPushButton(Dialog);
    submit->setObjectName(QString::fromUtf8("submit"));
    submit->setGeometry(QRect(140, 280, 102, 26));
    cancel = new QPushButton(Dialog);
    cancel->setObjectName(QString::fromUtf8("cancel"));
    cancel->setGeometry(QRect(250, 280, 102, 26));

    retranslateUi(Dialog);

    QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
    Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("Dialog", "Price of Day", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("Dialog", "Price", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("Dialog", "Days of staying", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("Dialog", "Days", 0, QApplication::UnicodeUTF8));
    label_14->setText(QApplication::translate("Dialog", "Deposit", 0, QApplication::UnicodeUTF8));
    label_15->setText(QApplication::translate("Dialog", "Deposit", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("Dialog", "Name", 0, QApplication::UnicodeUTF8));
    label_9->setText(QApplication::translate("Dialog", "ID num", 0, QApplication::UnicodeUTF8));
    label_10->setText(QApplication::translate("Dialog", "Contact", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Dialog", "Room Number", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("Dialog", "Num", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("Dialog", "The record info", 0, QApplication::UnicodeUTF8));
    submit->setText(QApplication::translate("Dialog", "submit", 0, QApplication::UnicodeUTF8));
    cancel->setText(QApplication::translate("Dialog", "cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Dialog);
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
