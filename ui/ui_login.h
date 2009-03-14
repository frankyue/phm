/********************************************************************************
** Form generated from reading ui file 'login.ui'
**
** Created: Fri Jan 16 12:29:14 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *Submit;
    QPushButton *Quit;
    QLineEdit *username_line;
    QLineEdit *password_line;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Dialog)
    {
    if (Dialog->objectName().isEmpty())
        Dialog->setObjectName(QString::fromUtf8("Dialog"));
    Dialog->resize(346, 183);
    Submit = new QPushButton(Dialog);
    Submit->setObjectName(QString::fromUtf8("Submit"));
    Submit->setGeometry(QRect(80, 140, 102, 26));
    Quit = new QPushButton(Dialog);
    Quit->setObjectName(QString::fromUtf8("Quit"));
    Quit->setGeometry(QRect(210, 140, 102, 26));
    username_line = new QLineEdit(Dialog);
    username_line->setObjectName(QString::fromUtf8("username_line"));
    username_line->setGeometry(QRect(150, 60, 113, 27));
    password_line = new QLineEdit(Dialog);
    password_line->setObjectName(QString::fromUtf8("password_line"));
    password_line->setGeometry(QRect(150, 100, 113, 27));
    password_line->setEchoMode(QLineEdit::Password);
    label = new QLabel(Dialog);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(50, 60, 71, 17));
    label_2 = new QLabel(Dialog);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(50, 100, 56, 17));
    label_3 = new QLabel(Dialog);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(40, 20, 271, 17));
    QFont font;
    font.setPointSize(13);
    label_3->setFont(font);

    retranslateUi(Dialog);

    QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
    Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
    Submit->setText(QApplication::translate("Dialog", "submit", 0, QApplication::UnicodeUTF8));
    Quit->setText(QApplication::translate("Dialog", "Quit", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Dialog", "User name", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("Dialog", "Password", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("Dialog", "The Hotel Manegemnet System", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Dialog);
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
