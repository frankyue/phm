#include "AddRoom.h"
#include "ui_addroom.h"

// place your code here
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQueryModel>

AddRoomDlg::AddRoomDlg(QWidget *parent): QDialog(parent)
{
    ARui.setupUi(this);
}

QString AddRoomDlg::roomnum()
{
	return ARui.RoomNum->text();	
}

QString AddRoomDlg::roomprice()
{
	return ARui.RoomPrice->text();
}

void AddRoomDlg::on_RoomSubmit_clicked()
{
	bool exist = true;
	QSqlQueryModel *model = new QSqlQueryModel;
	model->setQuery("select Num from Room");
	int num = model->record().indexOf("Num");
	for(int i = 0; i < model->rowCount(); ++i)
	{
		QSqlRecord record = model->record(i);
		if( roomnum().toInt() == record.value(num).toInt())
		{
			QMessageBox::critical(0,QObject::tr("Error!"),QObject::tr("The Room is existing!"),QMessageBox::Cancel);
			exist = !exist;
			break;
		}		
	}
	if(exist)
	{
		QSqlTableModel *insertmodel = new QSqlTableModel;
		insertmodel->setTable("Room");
		// 先SELECT資料到Model
		insertmodel->select();
		// 只要指定為0即可
		int row = 0; 
		// 在Model中新增一列
		insertmodel->insertRows(row, 1);
		insertmodel->setData(insertmodel->index(row, 0), roomnum().toInt());
		insertmodel->setData(insertmodel->index(row, 1), roomprice().toDouble());
		exist = insertmodel->submitAll();
		if(exist)
		{
			QMessageBox msgBox;
			msgBox.setText("Succeed to add the room!");
			msgBox.exec();
			ARui.RoomNum->clear();
			ARui.RoomPrice->clear();
		}
	}	
}
