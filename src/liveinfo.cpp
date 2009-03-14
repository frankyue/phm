#include "liveinfo.h"
Liveinfo::Liveinfo(int getroom,QWidget *parent) : QDialog(parent), Leavebool(true),Liveinbool(true)
{
	RoomNum = getroom;
	QSqlQueryModel roomtable;// = new QSqlQueryModel;
    roomtable.setQuery("select * from Room;");
   	QSqlQueryModel recordtable;// = new QSqlQueryModel;
    recordtable.setQuery("select * from Record,Guest;");
    int Check_live = 0;
   
    QString Snum;
    QString Sname;
    QString SID;
    QString Scontact;
    QString Stime;
    QString Etime;

	for (int i = 0; i < roomtable.rowCount(); ++i) 
	{
    	QSqlRecord roomrecord = roomtable.record(i);
    	int Rnum = roomrecord.value("Num").toInt();
    		if( Rnum == getroom )
    		{	
    			Check_live = roomrecord.value("Live").toInt();
    			Snum = roomrecord.value("Num").toString();
    			Sprice = roomrecord.value("Price").toString();
				
				if(Check_live == 1)
				{
    				for (int j = 0; j < recordtable.rowCount(); ++j)
    				{
    					QSqlRecord Recordrecord = recordtable.record(j);
    					Rnum = Recordrecord.value("Num").toInt();
    					if( Rnum == getroom )
    					{
    						Sname = Recordrecord.value("Name").toString();
    						Sdays = Recordrecord.value("Days").toString();
    						Sdeposit = Recordrecord.value("Deposit").toString();
    						SID = Recordrecord.value("ID").toString();
    						Scontact = Recordrecord.value("Contact").toString();
    						Stime = Recordrecord.value("Stime").toString();
    						Etime = Recordrecord.value("Etime").toString();
    					}
   					}
  				}
    			break;
   			}
     }//Got the roon num and chek if the room have lived
    
    QGridLayout* mainlayout = new QGridLayout;
	QGridLayout* buttonlayout = new QGridLayout;

	QLabel* Name = new QLabel("Name");
    QLabel* Contact = new QLabel("Contact");
    QLabel* ID = new QLabel("ID");
    QLabel* Days = new QLabel("Days");
    QLabel* Despoit = new QLabel("Despoit");
    QLabel* RoomNum = new QLabel("Room Num");
    QLabel* Price = new QLabel("Price");
    QLabel* Livein = new QLabel("Live in day");
    QLabel* LeaveDay = new QLabel("Leave day");
        
    NameEdit = new QLineEdit;
    ContactEdit = new QLineEdit;
    IDEdit = new QLineEdit;
    DaysEdit = new QLineEdit;
    DespoitEdit = new QLineEdit;
    RoomNumEdit = new QLineEdit;
/*
    PriceEdit = new QLineEdit;
    LiveinEdit = new QLineEdit;
    LeaveEdit = new QLineEdit;
*/
    QLineEdit* PriceEdit = new QLineEdit;
    QLineEdit* LiveinEdit = new QLineEdit;
    QLineEdit* LeaveEdit = new QLineEdit;
    
    QPushButton* Modify = new QPushButton("Modify");
	QPushButton* Check_out = new QPushButton("Check Out");
	QPushButton* Submit = new QPushButton("Submit");
	QPushButton* Cancel = new QPushButton("Cancel");
		
	PriceEdit->setText(Sprice);
	RoomNumEdit->setText(Snum);
	QDate a = QDate::currentDate();
	Estime = a.toString("yyyy-MM-dd");
	
	
	if(Check_live == 1)    //show the Record infomation 
   	{
		leave();
		
		NameEdit->setText(Sname);
		ContactEdit->setText(Scontact);
    	IDEdit->setText(SID);
    	DaysEdit->setText(Sdays);
    	DespoitEdit->setText(Sdeposit);
    	LiveinEdit->setText(Stime);
    	LeaveEdit->setText(Etime);
    
	}
	else
	{
		livein();
		LiveinEdit->setText(Estime);
	}
	
	LeaveDay->setEnabled(Liveinbool);
	LeaveEdit->setEnabled(Liveinbool);
	Modify->setEnabled(false);
	Check_out->setEnabled(Liveinbool);
	Submit->setEnabled(Leavebool);
	
	connect(Submit, SIGNAL(clicked()), this, SLOT(SubmitButton()));
	connect(Modify, SIGNAL(clicked()), this, SLOT(ModifyButton()));
	connect(Check_out, SIGNAL(clicked()), this, SLOT(CheckoutButton()));
	connect(Cancel, SIGNAL(clicked()), this, SLOT(CancelButton()));	
	
	mainlayout->addWidget(Name,0,0,1,1);
    mainlayout->addWidget(Contact,0,2,1,1);
    mainlayout->addWidget(ID,1,0,1,1);
    mainlayout->addWidget(Days,2,0,1,1);
    mainlayout->addWidget(Despoit,2,2,1,1);
    mainlayout->addWidget(RoomNum,3,0,1,1);
    mainlayout->addWidget(Price,3,2,1,1);
    mainlayout->addWidget(Livein,4,0,1,1);
    
	mainlayout->addWidget(NameEdit,0,1,1,1);
	mainlayout->addWidget(ContactEdit,0,3,1,1);
	mainlayout->addWidget(IDEdit,1,1,1,3);
	mainlayout->addWidget(DaysEdit,2,1,1,1);
	mainlayout->addWidget(DespoitEdit,2,3,1,1);
	mainlayout->addWidget(RoomNumEdit,3,1,1,1);
	mainlayout->addWidget(PriceEdit,3,3,1,1);
	mainlayout->addWidget(LiveinEdit,4,1,1,1);
	mainlayout->addWidget(LeaveDay,4,2,1,1);	
	mainlayout->addWidget(LeaveEdit,4,3,1,1);
	
	buttonlayout->addWidget(Submit,0,0,1,1);
	buttonlayout->addWidget(Modify,0,1,1,1);
	buttonlayout->addWidget(Check_out,0,2,1,1);
	buttonlayout->addWidget(Cancel,0,3,1,1);

	QVBoxLayout *Layout = new QVBoxLayout;
	Layout->addLayout(mainlayout);
	Layout->addLayout(buttonlayout);
	setLayout(Layout);
//	setWindow(200,300,400,500);
	setWindowTitle("Record");
	
}
//
void Liveinfo::leave()
{
	Leavebool = false;
}
void Liveinfo::livein()
{
	Liveinbool = false;		
}
//------------------Flow SLOT--------------------------

void Liveinfo::SubmitButton()
{
//	bool a,b,c;
	if(NameEdit->text().isEmpty() || ContactEdit->text().isEmpty() || IDEdit->text().isEmpty() || 
                DaysEdit->text().isEmpty() || DespoitEdit->text().isEmpty())
	{
                QMessageBox::critical(0,QObject::tr("Error!"),QObject::tr("Please Fill them all!"),QMessageBox::Cancel);
	}
	else
	{
		QString Ename = NameEdit->text();
		QString Econtact = ContactEdit->text();
		QString EID = IDEdit->text();
		QString Edays = DaysEdit->text();
		QString Edeposit = DespoitEdit->text();
		QDate cudate = QDate::currentDate();
		cudate = cudate.addDays(Edays.toInt());
		Eetime = cudate.toString("yyyy-MM-dd");
		
		QSqlTableModel *insertGuest = new QSqlTableModel;		//修改Guest中的记录
		insertGuest->setTable("Guest");
	    insertGuest->select();			// 只要指定Row＝0即可插入新行
	    int row = 0;
	    insertGuest->insertRows(row,1);
	    insertGuest->setData(insertGuest->index(row, 0), QVariant(Ename));
	    insertGuest->setData(insertGuest->index(row, 1), QVariant(EID));
	    insertGuest->setData(insertGuest->index(row, 2), QVariant(Econtact));
	    insertGuest->setData(insertGuest->index(row, 3), QVariant(RoomNum));
	//  a = insertGuest->submit();
	  	insertGuest->submit();
	    
	    QSqlTableModel *insertRecord = new QSqlTableModel;		//修改Record中的记录
	    insertRecord->setTable("Record");
	    insertRecord->select();
	    insertRecord->insertRows(row,1);
	    insertRecord->setData(insertRecord->index(row,0),QVariant(Ename));
	    insertRecord->setData(insertRecord->index(row,1),QVariant(RoomNum));
	    insertRecord->setData(insertRecord->index(row,2),QVariant(Edays));
	    insertRecord->setData(insertRecord->index(row,3),QVariant(Edeposit));
	    insertRecord->setData(insertRecord->index(row,4),QVariant(Estime));
	    insertRecord->setData(insertRecord->index(row,5),QVariant(Eetime));
	//  b = insertRecord->submit();
		insertRecord->submit();
		
		UpdateRoom(RoomNum,1);    //修改已入住的房间
	
	//	if(a && b && c)
	//	{	
			QMessageBox msgBox;
			msgBox.setText("Succeed to live in! Welcome");
			msgBox.exec();
	//	}	
		 QDialog::accept();
	 }
}

void Liveinfo::ModifyButton()
{
	
}
void Liveinfo::CheckoutButton()
{
//	结算并删除客房入住信息;
	Check * check = new Check(RoomNum,Sdays.toInt(),Sdeposit.toInt(),Sprice.toInt());
	int accepted = check->exec();
	if (accepted)
	{
		QMessageBox msgBox;
		msgBox.setText("Succeed to checkout! Welcome next time!");
		msgBox.exec();
		QDialog::accept();
	}
}
void Liveinfo::CancelButton()
{
	reject();
}

//------------------Above SLOT--------------------------

//------------------Flow Date--------------------------

//------------------Above Date--------------------------
void Liveinfo::UpdateRoom(int RoomNum,int change)
{
	QSqlTableModel * updateroom = new QSqlTableModel;		//修改已入住的房间
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

// place your code here
