#ifndef __ADDROOM_H__
#define __ADDROOM_H__

// place your code here
#include "ui_addroom.h"
#include <QDialog>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQueryModel>
#include "mainwindow.h"

class AddRoomDlg: public QDialog
{
	Q_OBJECT
public:
    AddRoomDlg(QWidget *parent = 0);
private slots:
	QString roomnum();
	QString roomprice();
	void on_RoomSubmit_clicked();
	void on_RoomCancel_clicked(){ reject(); }
//	virtual void accept();
private: 
	Ui::AddRoomdlgUi ARui;
};
#endif // __ADDROOM_H__
