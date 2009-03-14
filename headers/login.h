#ifndef SQLTEST_H
#define SQLTEST_H
//
#include <QDialog>
#include "ui_login.h"
//
class QSqlError;

class Testdlg : public QDialog
{
	Q_OBJECT
public:

//--------------------- above Paramesters -----------------------
	QString username() const;
	QString password() const;

	Testdlg( QWidget * parent = 0);
private slots:
	void on_Submit_clicked();
	void on_Quit_clicked(){ reject();}
private:	
	Ui_Dialog ui;
};
#endif
