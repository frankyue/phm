/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Mon Feb 16 17:49:35 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConfig;
    QAction *actionDf;
    QAction *actionAccount;
    QAction *actionInitial_The_Database;
    QAction *actionAdd_Room_Info;
    QAction *actionAbout;
    QWidget *centralwidget;
    QPushButton *RecordButton;
    QPushButton *RefreshButton;
    QPushButton *SearchButton;
    QLineEdit *search_Edit;
    QLabel *label;
    QLabel *label_2;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuTool;
    QMenu *menuAbout;

    void setupUi(QMainWindow *MainWindow)
    {
    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    //MainWindow->resize(449, 407);
    MainWindow->setGeometry(QRect(400, 200, 449, 407));
    QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
    MainWindow->setSizePolicy(sizePolicy);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/8DC3.gif")), QIcon::Normal, QIcon::Off);
    MainWindow->setWindowIcon(icon);
    actionConfig = new QAction(MainWindow);
    actionConfig->setObjectName(QString::fromUtf8("actionConfig"));
    actionDf = new QAction(MainWindow);
    actionDf->setObjectName(QString::fromUtf8("actionDf"));
    actionAccount = new QAction(MainWindow);
    actionAccount->setObjectName(QString::fromUtf8("actionAccount"));
    actionInitial_The_Database = new QAction(MainWindow);
    actionInitial_The_Database->setObjectName(QString::fromUtf8("actionInitial_The_Database"));
    actionAdd_Room_Info = new QAction(MainWindow);
    actionAdd_Room_Info->setObjectName(QString::fromUtf8("actionAdd_Room_Info"));
    actionAbout = new QAction(MainWindow);
    actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    RecordButton = new QPushButton(centralwidget);
    RecordButton->setObjectName(QString::fromUtf8("RecordButton"));
    RecordButton->setGeometry(QRect(40, 320, 151, 26));
    RefreshButton = new QPushButton(centralwidget);
    RefreshButton->setObjectName(QString::fromUtf8("RefreshButton"));
    RefreshButton->setGeometry(QRect(320, 320, 102, 26));
    SearchButton = new QPushButton(centralwidget);
    SearchButton->setObjectName(QString::fromUtf8("SearchButton"));
    SearchButton->setGeometry(QRect(310, 160, 102, 26));
    search_Edit = new QLineEdit(centralwidget);
    search_Edit->setObjectName(QString::fromUtf8("search_Edit"));
    search_Edit->setGeometry(QRect(290, 120, 151, 27));
    label = new QLabel(centralwidget);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(20, 10, 141, 17));
    label_2 = new QLabel(centralwidget);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(300, 90, 121, 17));
    MainWindow->setCentralWidget(centralwidget);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    MainWindow->setStatusBar(statusbar);
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 449, 25));
    menuTool = new QMenu(menubar);
    menuTool->setObjectName(QString::fromUtf8("menuTool"));
    menuAbout = new QMenu(menubar);
    menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
    MainWindow->setMenuBar(menubar);

    menubar->addAction(menuTool->menuAction());
    menubar->addAction(menuAbout->menuAction());
    menuTool->addSeparator();
    menuTool->addAction(actionConfig);
    menuTool->addAction(actionInitial_The_Database);
    menuTool->addAction(actionAdd_Room_Info);
    menuAbout->addAction(actionAbout);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Portable management of Hotel ", 0, QApplication::UnicodeUTF8));
    actionConfig->setText(QApplication::translate("MainWindow", "Config", 0, QApplication::UnicodeUTF8));
    actionDf->setText(QApplication::translate("MainWindow", "df", 0, QApplication::UnicodeUTF8));
    actionAccount->setText(QApplication::translate("MainWindow", "Account", 0, QApplication::UnicodeUTF8));
    actionInitial_The_Database->setText(QApplication::translate("MainWindow", "Initial Database", 0, QApplication::UnicodeUTF8));
    actionAdd_Room_Info->setText(QApplication::translate("MainWindow", "Add Room Info", 0, QApplication::UnicodeUTF8));
    actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
    RecordButton->setText(QApplication::translate("MainWindow", "Record And Check out", 0, QApplication::UnicodeUTF8));
    RefreshButton->setText(QApplication::translate("MainWindow", "Refresh", 0, QApplication::UnicodeUTF8));
    SearchButton->setText(QApplication::translate("MainWindow", "Search", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("MainWindow", "The Residue Room Info", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("MainWindow", "Input Name or Num", 0, QApplication::UnicodeUTF8));
    menuTool->setTitle(QApplication::translate("MainWindow", "Tool", 0, QApplication::UnicodeUTF8));
    menuAbout->setTitle(QApplication::translate("MainWindow", "about", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
