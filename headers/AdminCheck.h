#ifndef __ADMINCHECK_H__
#define __ADMINCHECK_H__

// place your code here
#include <QDialog>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QtSql>

class QLineEdit;
class AdminCheckDlg: public QDialog
{
	Q_OBJECT
public:
    AdminCheckDlg(QWidget *parent = 0);
private slots:
	virtual void accept();
private:
    QLineEdit * usrLineEdit;
    QLineEdit * pwdLineEdit;
};

#endif // __ADMINCHECK_H__
