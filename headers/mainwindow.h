#ifndef __MAINWINDOW_H__
#define __MAINWINDOW_H__
#include <QSqlDatabase>
#include <QMessageBox>
#include <QtSql>
#include <QMainWindow>
#include "ui_mainwindow.h"
#include <QSettings>

#include "qsqlconnectiondialog.h"
#include "ui_qsqlconnectiondialog.h"
#include "AdminCheck.h"
#include "AddRoom.h"
#include "show.h"

// place your code here

class Mainwindow : public QMainWindow,public Ui_MainWindow
{
	Q_OBJECT
public:
	bool live;
	bool rebool;
	QTableView * RoomView;
//--------------------- above Paramesters -----------------------

	
	Mainwindow(QWidget * parent = 0);
//	void adjustHeader();
	void readSettings();
//	int count_residue();
	bool InitialDatabase();
//	bool repaintview();
	QSqlQueryModel * modelback(QWidget * centralwidget);
	QSqlTableModel * searchmodel(QString filter);
	bool ConnectDatabase(QString driver,QString dbName,QString host,QString user,QString passwd);
	QGroupBox * viewadd(QWidget *centralwidget,QString filter);
	//--------------------- Just For Test -----------------------
//	void show_paramesters();
private slots:
	//void on_Quit_clicked(){ reject();}
	//void on_sql_clicked();
	void on_RecordButton_clicked();
	void on_RefreshButton_clicked();
	void on_SearchButton_clicked();	
	
	void about();
	void Menuconfig();
	//void Menuaccount();
	void Menuinitial();
	void Menuaddroom();
	//********* Above Menu solt **********
	//void AddRoomInfo();
	//void Refresh_Info()	;
	
private:	
	Ui_MainWindow main;
	QString driver;
	QString dbName;
	QString host;
	QString user;
	QString passwd;
	QSqlDatabase db;
};

#endif // __MAINWINDOW_H__
