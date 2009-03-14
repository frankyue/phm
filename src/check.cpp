#include "check.h"
#include "liveinfo.h"

// place your code here
Check::Check(int roomnum,int days,int deposit,int price,QWidget * parent) : QDialog(parent)
{	
	int Payed ;
	int Backed ;
	Payed = price * days;
	Backed = deposit - Payed;
	
	Num = roomnum;
	
	QPushButton * submit = new QPushButton("Check out");
	QPushButton * cancel = new QPushButton("Cancel");

	QLabel * Roomnum = new QLabel();
	Roomnum->setNum(roomnum);
	QLabel * room = new QLabel("RoomNum");
	QLabel * Days = new QLabel();//days);
	Days->setNum(days);
	QLabel * day = new QLabel("Days");
	QLabel * Deposit = new QLabel();//deposit);
	Deposit->setNum(deposit);
	QLabel * depos = new QLabel("Deposit");
	QLabel * Price = new QLabel();//price);
	Price->setNum(price);
	QLabel * pri = new QLabel("Price/day");
	QLabel * pay = new QLabel("Pay");
	QLabel * PAY = new QLabel();
	PAY->setNum(Payed);
	QLabel * back = new QLabel("Give Back");
	QLabel * BACK = new QLabel();
	BACK->setNum(Backed);
		
	QGridLayout * showlayout = new QGridLayout;
	QHBoxLayout * buttonlayout = new QHBoxLayout;
	QVBoxLayout * Layout = new QVBoxLayout;
	
	showlayout->addWidget(room,0,0,1,1);
	showlayout->addWidget(Roomnum,0,1,1,1);
	showlayout->addWidget(day,0,2,1,1);
	showlayout->addWidget(Days,0,3,1,1);
	showlayout->addWidget(depos,1,0,1,1);
	showlayout->addWidget(Deposit,1,1,1,1);
	showlayout->addWidget(pri,1,2,1,1);
	showlayout->addWidget(Price,1,3,1,1);
	showlayout->addWidget(pay,2,0,1,1);
	showlayout->addWidget(PAY,2,1,1,1);
	showlayout->addWidget(back,2,2,1,1);
	showlayout->addWidget(BACK,2,3,1,1);
	
	connect(submit,SIGNAL(clicked()),this,SLOT(submit()));
	connect(cancel,SIGNAL(clicked()),this,SLOT(cancel()));
	
	buttonlayout->addWidget(submit);
	buttonlayout->addSpacing(20);
	buttonlayout->addWidget(cancel);
		
	Layout->addLayout(showlayout);
	Layout->addLayout(buttonlayout);
	setLayout(Layout);	
}

void Check::submit()
{
	QString filter = "Num = ";
	QString f;
	f.setNum(Num);
	filter += f;
	
	Updatetable("Record",filter);	//删除入住信息
	Updatetable("Guest",filter);	//删除房客信息
	UpdateRoom(Num,0);				//修改已入住的房间
	accept();	
}

void Check::UpdateRoom(int RoomNum,int change)
{
	QSqlTableModel * updateroom = new QSqlTableModel;		
	updateroom->setTable("Room");
	updateroom->select();	
	for(int i = 0;i < updateroom->rowCount(); ++i)
	{		
		QSqlRecord Roomrecord = updateroom->record(i);
		int check_room = Roomrecord.value("Num").toInt();
		if( check_room == RoomNum )
		{
			Roomrecord.setValue("Live",change);
			updateroom->setRecord(i, Roomrecord);
		}
	}		
	updateroom->submitAll();
}

void Check::Updatetable(QString table,QString filter)
{
	QSqlTableModel *model = new QSqlTableModel;
	model->setTable(table);
	model->setFilter(filter);
	model->select();
	model->removeRows(0,model->rowCount());
	model->submitAll();
}