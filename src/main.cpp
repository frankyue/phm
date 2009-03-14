#include <QApplication>
#include <QtCore>
#include <QtGui>
#include <QtSql>

#include "login.h"
#include "mainwindow.h"


int main(int argc, char ** argv)
{
	QApplication app( argc, argv );
	Testdlg dialog;
	if (dialog.exec() != QDialog::Accepted)
	   	return -1;
    Mainwindow mainwindow;
    mainwindow.show();
	return app.exec();
}
