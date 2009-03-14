#include "qsqlconnectiondialog.h"


#include <QSqlDatabase>
#include <QtSql>
ConnDlg::ConnDlg(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);
    QStringList drivers = QSqlDatabase::drivers();

    ui.comboDriver->addItems(drivers);
    connect(ui.comboDriver,SIGNAL(currentIndexChanged( const QString & )),this,SLOT(driverChanged(const QString &)));
}

ConnDlg::~ConnDlg()
{
}

QString ConnDlg::driverName() const
{
    return ui.comboDriver->currentText();
}

QString ConnDlg::databaseName() const
{
    return ui.editDatabase->text();
}

QString ConnDlg::userName() const
{
    return ui.editUsername->text();
}

QString ConnDlg::password() const
{
    return ui.editPassword->text();
}

QString ConnDlg::hostName() const
{
    return ui.editHostname->text();
}

int ConnDlg::port() const
{
    return ui.portSpinBox->value();
}

void ConnDlg::on_okButton_clicked()
{
	if(ui.comboDriver->currentText().isEmpty() || ui.editDatabase->text().isEmpty() || 
		ui.editUsername->text().isEmpty() || ui.editPassword->text().isEmpty() || 
		ui.editPassword->text().isEmpty())
		{
			QMessageBox::critical(0,QObject::tr("Error!"),QObject::tr("All of the blank you had input!"),QMessageBox::Cancel);
		}
	ConnDlg::saveSettings();
	accept();		
}

void ConnDlg::saveSettings()
{
//	QSettings settings(ORGANIZATION,APPNAME);
	QSettings settings("Frankyue","Fsql");
	settings.setValue("Config/Driver",driverName());
	settings.setValue("Config/Database",databaseName());
	settings.setValue("Config/User",userName());
	settings.setValue("Config/Pass",password());
	settings.setValue("Config/Host",hostName());
}

/*void ConnDlg::readSettings()
{
	QSettings settings;
	
}*/

QSqlError ConnDlg::addConnection(const QString &driver, const QString &dbName, const QString &host,const QString &user, const QString &passwd, int port)
{
    static int cCount = 0;

    QSqlError err;
    QSqlDatabase db = QSqlDatabase::addDatabase(driver, QString("conn%1").arg(++cCount));
    db.setDatabaseName(dbName);
    db.setHostName(host);
    db.setPort(port);
    if (!db.open(user, passwd)) {
        err = db.lastError();
        db = QSqlDatabase();
        QSqlDatabase::removeDatabase(QString("conn%1").arg(cCount));
    }
    return err;
}

void ConnDlg::driverChanged(const QString & text)
{
	qDebug()<<text;
	if(text =="QSQLITE")
	{
		ui.editDatabase->setEnabled(false);
		ui.editUsername->setEnabled(false);
		ui.editPassword->setEnabled(false);
		ui.editHostname->setEnabled(false);
		ui.portSpinBox->setEnabled(false);
	}
	else{
		ui.editDatabase->setEnabled(true);
		ui.editUsername->setEnabled(true);
		ui.editPassword->setEnabled(true);
		ui.editHostname->setEnabled(true);
		ui.portSpinBox->setEnabled(true);
	}
}