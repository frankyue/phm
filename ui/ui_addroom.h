/********************************************************************************
** Form generated from reading ui file 'addroom.ui'
**
** Created: Fri Jan 23 22:46:18 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ADDROOM_H
#define UI_ADDROOM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddRoomdlgUi
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *RoomNum;
    QLineEdit *RoomPrice;
    QPushButton *RoomSubmit;
    QPushButton *RoomCancel;
    QLabel *label_3;

    void setupUi(QDialog *AddRoomdlgUi)
    {
    if (AddRoomdlgUi->objectName().isEmpty())
        AddRoomdlgUi->setObjectName(QString::fromUtf8("AddRoomdlgUi"));
    AddRoomdlgUi->resize(268, 151);
    label = new QLabel(AddRoomdlgUi);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(60, 50, 56, 17));
    label_2 = new QLabel(AddRoomdlgUi);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(60, 80, 56, 17));
    RoomNum = new QLineEdit(AddRoomdlgUi);
    RoomNum->setObjectName(QString::fromUtf8("RoomNum"));
    RoomNum->setGeometry(QRect(100, 50, 113, 27));
    RoomPrice = new QLineEdit(AddRoomdlgUi);
    RoomPrice->setObjectName(QString::fromUtf8("RoomPrice"));
    RoomPrice->setGeometry(QRect(100, 80, 113, 27));
    RoomSubmit = new QPushButton(AddRoomdlgUi);
    RoomSubmit->setObjectName(QString::fromUtf8("RoomSubmit"));
    RoomSubmit->setGeometry(QRect(30, 110, 102, 20));
    RoomSubmit->setMinimumSize(QSize(102, 0));
    RoomCancel = new QPushButton(AddRoomdlgUi);
    RoomCancel->setObjectName(QString::fromUtf8("RoomCancel"));
    RoomCancel->setGeometry(QRect(150, 110, 102, 20));
    RoomCancel->setMinimumSize(QSize(102, 0));
    label_3 = new QLabel(AddRoomdlgUi);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(50, 20, 161, 16));
    QFont font;
    font.setPointSize(11);
    label_3->setFont(font);

    retranslateUi(AddRoomdlgUi);

    QMetaObject::connectSlotsByName(AddRoomdlgUi);
    } // setupUi

    void retranslateUi(QDialog *AddRoomdlgUi)
    {
    AddRoomdlgUi->setWindowTitle(QApplication::translate("AddRoomdlgUi", "Add room info", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("AddRoomdlgUi", "Num", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("AddRoomdlgUi", "Price", 0, QApplication::UnicodeUTF8));
    RoomSubmit->setText(QApplication::translate("AddRoomdlgUi", "submit", 0, QApplication::UnicodeUTF8));
    RoomCancel->setText(QApplication::translate("AddRoomdlgUi", "cancel", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("AddRoomdlgUi", "Add Room Infomation", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(AddRoomdlgUi);
    } // retranslateUi

};

namespace Ui {
    class AddRoomdlgUi: public Ui_AddRoomdlgUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDROOM_H
