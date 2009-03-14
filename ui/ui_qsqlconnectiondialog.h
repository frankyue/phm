/********************************************************************************
** Form generated from reading ui file 'qsqlconnectiondialog.ui'
**
** Created: Wed Jan 21 22:43:03 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QSQLCONNECTIONDIALOG_H
#define UI_QSQLCONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QSqlConnectionDialogUi
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *connGroupBox;
    QGridLayout *gridLayout;
    QComboBox *comboDriver;
    QLabel *textLabel4;
    QLabel *textLabel2;
    QLineEdit *editDatabase;
    QSpinBox *portSpinBox;
    QLabel *textLabel3;
    QLineEdit *editPassword;
    QLineEdit *editUsername;
    QLineEdit *editHostname;
    QLabel *textLabel5;
    QLabel *textLabel5_2;
    QLabel *textLabel4_2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *QSqlConnectionDialogUi)
    {
    if (QSqlConnectionDialogUi->objectName().isEmpty())
        QSqlConnectionDialogUi->setObjectName(QString::fromUtf8("QSqlConnectionDialogUi"));
    QSqlConnectionDialogUi->resize(320, 321);
    vboxLayout = new QVBoxLayout(QSqlConnectionDialogUi);
#ifndef Q_OS_MAC
    vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
    vboxLayout->setMargin(9);
#endif
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    connGroupBox = new QGroupBox(QSqlConnectionDialogUi);
    connGroupBox->setObjectName(QString::fromUtf8("connGroupBox"));
    gridLayout = new QGridLayout(connGroupBox);
#ifndef Q_OS_MAC
    gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
    gridLayout->setMargin(9);
#endif
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    comboDriver = new QComboBox(connGroupBox);
    comboDriver->setObjectName(QString::fromUtf8("comboDriver"));

    gridLayout->addWidget(comboDriver, 0, 1, 1, 1);

    textLabel4 = new QLabel(connGroupBox);
    textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

    gridLayout->addWidget(textLabel4, 2, 0, 1, 1);

    textLabel2 = new QLabel(connGroupBox);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout->addWidget(textLabel2, 0, 0, 1, 1);

    editDatabase = new QLineEdit(connGroupBox);
    editDatabase->setObjectName(QString::fromUtf8("editDatabase"));

    gridLayout->addWidget(editDatabase, 1, 1, 1, 1);

    portSpinBox = new QSpinBox(connGroupBox);
    portSpinBox->setObjectName(QString::fromUtf8("portSpinBox"));
    portSpinBox->setMinimum(-1);
    portSpinBox->setMaximum(65535);
    portSpinBox->setValue(-1);

    gridLayout->addWidget(portSpinBox, 5, 1, 1, 1);

    textLabel3 = new QLabel(connGroupBox);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

    gridLayout->addWidget(textLabel3, 1, 0, 1, 1);

    editPassword = new QLineEdit(connGroupBox);
    editPassword->setObjectName(QString::fromUtf8("editPassword"));
    editPassword->setEchoMode(QLineEdit::Password);

    gridLayout->addWidget(editPassword, 3, 1, 1, 1);

    editUsername = new QLineEdit(connGroupBox);
    editUsername->setObjectName(QString::fromUtf8("editUsername"));

    gridLayout->addWidget(editUsername, 2, 1, 1, 1);

    editHostname = new QLineEdit(connGroupBox);
    editHostname->setObjectName(QString::fromUtf8("editHostname"));

    gridLayout->addWidget(editHostname, 4, 1, 1, 1);

    textLabel5 = new QLabel(connGroupBox);
    textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

    gridLayout->addWidget(textLabel5, 4, 0, 1, 1);

    textLabel5_2 = new QLabel(connGroupBox);
    textLabel5_2->setObjectName(QString::fromUtf8("textLabel5_2"));

    gridLayout->addWidget(textLabel5_2, 5, 0, 1, 1);

    textLabel4_2 = new QLabel(connGroupBox);
    textLabel4_2->setObjectName(QString::fromUtf8("textLabel4_2"));

    gridLayout->addWidget(textLabel4_2, 3, 0, 1, 1);


    vboxLayout->addWidget(connGroupBox);

    hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
    hboxLayout->setSpacing(6);
#endif
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    okButton = new QPushButton(QSqlConnectionDialogUi);
    okButton->setObjectName(QString::fromUtf8("okButton"));
    okButton->setDefault(true);

    hboxLayout->addWidget(okButton);

    cancelButton = new QPushButton(QSqlConnectionDialogUi);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

    hboxLayout->addWidget(cancelButton);


    vboxLayout->addLayout(hboxLayout);


#ifndef QT_NO_SHORTCUT
    textLabel4->setBuddy(editUsername);
    textLabel2->setBuddy(comboDriver);
    textLabel3->setBuddy(editDatabase);
    textLabel5->setBuddy(editHostname);
    textLabel5_2->setBuddy(portSpinBox);
    textLabel4_2->setBuddy(editPassword);
#endif // QT_NO_SHORTCUT

    QWidget::setTabOrder(comboDriver, editDatabase);
    QWidget::setTabOrder(editDatabase, editUsername);
    QWidget::setTabOrder(editUsername, editPassword);
    QWidget::setTabOrder(editPassword, editHostname);
    QWidget::setTabOrder(editHostname, portSpinBox);
    QWidget::setTabOrder(portSpinBox, okButton);
    QWidget::setTabOrder(okButton, cancelButton);

    retranslateUi(QSqlConnectionDialogUi);

    QMetaObject::connectSlotsByName(QSqlConnectionDialogUi);
    } // setupUi

    void retranslateUi(QDialog *QSqlConnectionDialogUi)
    {
    QSqlConnectionDialogUi->setWindowTitle(QApplication::translate("QSqlConnectionDialogUi", "\346\225\260\346\215\256\345\272\223\350\277\236\346\216\245", 0, QApplication::UnicodeUTF8));
    connGroupBox->setTitle(QApplication::translate("QSqlConnectionDialogUi", "\346\225\260\346\215\256\345\272\223\350\277\236\346\216\245\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
    textLabel4->setText(QApplication::translate("QSqlConnectionDialogUi", "\347\224\250\346\210\267\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QSqlConnectionDialogUi", "\351\251\261\345\212\250:", 0, QApplication::UnicodeUTF8));
    portSpinBox->setSpecialValueText(QApplication::translate("QSqlConnectionDialogUi", "Default", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QSqlConnectionDialogUi", "\346\225\260\346\215\256\345\272\223\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
    textLabel5->setText(QApplication::translate("QSqlConnectionDialogUi", "\344\270\273\346\234\272\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
    textLabel5_2->setText(QApplication::translate("QSqlConnectionDialogUi", "\347\253\257\345\217\243\357\274\232", 0, QApplication::UnicodeUTF8));
    textLabel4_2->setText(QApplication::translate("QSqlConnectionDialogUi", "\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
    okButton->setText(QApplication::translate("QSqlConnectionDialogUi", "\346\217\220\344\272\244", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("QSqlConnectionDialogUi", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QSqlConnectionDialogUi);
    } // retranslateUi

};

namespace Ui {
    class QSqlConnectionDialogUi: public Ui_QSqlConnectionDialogUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSQLCONNECTIONDIALOG_H
