#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

//--------------------- Initial -----------------------
Testdlg::Testdlg( QWidget * parent) : QDialog(parent)
{
	ui.setupUi(this);
}



//---------------------FLOW SOLTS -----------------------
void Testdlg::on_Submit_clicked()
{	
	if(username() == "root" && password() == "123456")
	{
		accept();
	}
	else
		QMessageBox::critical(0,QObject::tr("Something is wrong!"),QObject::tr("The username or password is wrong!"),QMessageBox::Cancel);
}


//---------------------ABOVE SOLTS -----------------------

//---------------------FLOW FUNCTION -----------------------


QString Testdlg::username() const
{
	 return ui.username_line->text();
}
QString Testdlg::password() const
{
	return ui.password_line->text();
}
/*QString Testdlg::Sqlcommond() const
{
    return ui.Commandtext->text();
}*/

/*QSqlError Testdlg:addConnection(const QString &driver,const QString &dbName,const QString &host,QString &user,const QString &pass,int port)
	{
		static int cCount = 0;
		QSqlError err;
		QSqlDatabase db = QSqlDatabase::addDatabase(driver,QString("conn%1").arg(++cCount));
		db.setDatabaseName(dbName);
		db.setHostName(host);
		db.setPort(port);
		if(!db.open(user,pass))
		{
			err = db.lastError();
			db = QSqlDatabase();
			QSqlDatabase::removeDatabase(QSting("conn%1").arg(cCount);
		}
		return err;
	}
*/
//
