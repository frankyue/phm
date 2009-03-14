#include "mainwindow.h"


// place your code here

//--------------------- Initial -----------------------
Mainwindow::Mainwindow(QWidget * parent):QMainWindow(parent),live(false),rebool(false)
{
	readSettings();
	live = ConnectDatabase(driver,dbName,host,user,passwd);
	if(!live)
	{
		QMessageBox::critical(0,QObject::tr("Error!"),QObject::tr("Can't to connect to Database!Please check the config!"),QMessageBox::Cancel);
	}
	setupUi(this);
	viewadd(this,0);
	
	
/*	QMainWindow * MainWindow = this;
	QAction * actionConfig = new QAction(MainWindow);
    actionConfig->setObjectName(QString::fromUtf8("actionConfig"));
    actionDf = new QAction(MainWindow);
    actionDf->setObjectName(QString::fromUtf8("actionDf"));
    QAction * actionAccount = new QAction(MainWindow);
    actionAccount->setObjectName(QString::fromUtf8("actionAccount"));
    QAction * actionInitial_The_Database = new QAction(MainWindow);
    actionInitial_The_Database->setObjectName(QString::fromUtf8("actionInitial_The_Database"));
    QAction * actionAdd_Room_Info = new QAction(MainWindow);
    actionAdd_Room_Info->setObjectName(QString::fromUtf8("actionAdd_Room_Info"));
    QWidget *centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    
    QPushButton *RecordButton = new QPushButton(centralwidget);
    RecordButton->setObjectName(QString::fromUtf8("RecordButton"));
    RecordButton->setGeometry(QRect(40, 310, 151, 26));
    QPushButton *RefreshButton = new QPushButton(centralwidget);
    RefreshButton->setObjectName(QString::fromUtf8("RefreshButton"));
    RefreshButton->setGeometry(QRect(310, 310, 102, 26));
    QPushButton *SearchButton = new QPushButton(centralwidget);
    SearchButton->setObjectName(QString::fromUtf8("SearchButton"));
    SearchButton->setGeometry(QRect(300, 150, 102, 26));
    QLabel *label = new QLabel(centralwidget);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(90, 340, 91, 17));
    QLineEdit *search_Edit = new QLineEdit(centralwidget);
    search_Edit->setObjectName(QString::fromUtf8("search_Edit"));
    search_Edit->setGeometry(QRect(280, 120, 151, 27));
    QLabel *Residue_show = new QLabel(centralwidget);
    Residue_show->setObjectName(QString::fromUtf8("Residue_show"));
    Residue_show->setGeometry(QRect(230, 340, 56, 17));
	
	MainWindow->setCentralWidget(centralwidget);
    
	QStatusBar * statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    MainWindow->setStatusBar(statusbar);
    QMenuBar * menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 497, 25));
    QMenu * menuTool = new QMenu(menubar);
    menuTool->setObjectName(QString::fromUtf8("menuTool"));
    QMenu * menuAbout = new QMenu(menubar);
    menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
    MainWindow->setMenuBar(menubar);
    
	if(rebool != repaintview())
    {
        qDebug("yes");
        viewadd(centralwidget);
  	}
	
    menubar->addAction(menuTool->menuAction());
    menubar->addAction(menuAbout->menuAction());
    menuTool->addSeparator();
    menuTool->addAction(actionConfig);
    menuTool->addAction(actionAccount);
    menuTool->addAction(actionInitial_The_Database);
    menuTool->addAction(actionAdd_Room_Info);
    
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
    actionConfig->setText(QApplication::translate("MainWindow", "Config", 0, QApplication::UnicodeUTF8));
    actionDf->setText(QApplication::translate("MainWindow", "df", 0, QApplication::UnicodeUTF8));
    actionAccount->setText(QApplication::translate("MainWindow", "Account", 0, QApplication::UnicodeUTF8));
    actionInitial_The_Database->setText(QApplication::translate("MainWindow", "Initial Database", 0, QApplication::UnicodeUTF8));
    actionAdd_Room_Info->setText(QApplication::translate("MainWindow", "Add Room Info", 0, QApplication::UnicodeUTF8));
    RecordButton->setText(QApplication::translate("MainWindow", "Record And Check out", 0, QApplication::UnicodeUTF8));
    RefreshButton->setText(QApplication::translate("MainWindow", "Refresh", 0, QApplication::UnicodeUTF8));
    SearchButton->setText(QApplication::translate("MainWindow", "Search", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("MainWindow", "Residue Room", 0, QApplication::UnicodeUTF8));
//  Residue_show->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
    menuTool->setTitle(QApplication::translate("MainWindow", "Tool", 0, QApplication::UnicodeUTF8));
    menuAbout->setTitle(QApplication::translate("MainWindow", "about", 0, QApplication::UnicodeUTF8));
    
        	
	MainWindow->setGeometry(300,250,464,409);
	QMetaObject::connectSlotsByName(MainWindow);
	
	//QTimer *timer = new QTimer(this);
    //connect(timer,SIGNAL(timeout()),this,SLOT(viewadd(centralwidget)));
    //timer->start(100);
	*/
//---------------------------Connection-----------------------------	
	connect(actionConfig, SIGNAL(triggered(bool)), this, SLOT(Menuconfig()));
	connect(actionInitial_The_Database, SIGNAL(triggered(bool)), this, SLOT(Menuinitial()));
	connect(actionAdd_Room_Info, SIGNAL(triggered(bool)), this, SLOT(Menuaddroom()));
	connect(actionAbout, SIGNAL(triggered(bool)), this, SLOT(about()));
//	connect(actionAccount, SIGNAL(triggered(bool)), this, SLOT(Menuaccount()));
	
}
//---------------------FLOW SOLTS -----------------------//
//void Mainwindow::on_sql_clicked()
//{
	//InitialDatabase();
//}

//***************** Menu ********************//
void Mainwindow::Menuconfig()
{
	ConnDlg *dialog = new ConnDlg(this);
	dialog->exec();
}

//void Mainwindow::Menuaccount()
//{
	//QString name = "'yue'";
	//int num = 1019;
	//QSqlQuery q;
	//q.exec("insert into Guest values ('frank',321,321)");	
	//q.exec("insert into Guest values ("+name+",123,123)");

	//
	//QSqlTableModel *model = new QSqlTableModel;
	//model->setTable("Room");
	//model->select();
	//int row = 0; 
	//model->insertRows(row, 1);
	//model->setData(model->index(row, 0), num);
	//model->setData(model->index(row, 1), 10);
	//model->submitAll();
//}

void Mainwindow::Menuinitial()
{
	AdminCheckDlg *adialog = new AdminCheckDlg(this);
	int accepted = adialog->exec();
	if (accepted == 1) 
	{
		bool a = InitialDatabase();
		QMessageBox msgBox;
		if(a)
		{		
			msgBox.setText("Succeed to Initial the Database!");
			msgBox.exec();
		}
		else
		{
			msgBox.setText("Can't to Initial the Database!Please Check!");
			msgBox.exec();
		}
    }
}

void Mainwindow::Menuaddroom()
{
	AdminCheckDlg *adialog = new AdminCheckDlg(this);
	int accepted = adialog->exec();
	if (accepted == 1) 
	{
		AddRoomDlg *addroomdlg = new AddRoomDlg(this);
		addroomdlg->exec();
	}
}

//---------------------ABOVE SOLTS -----------------------

//---------------------FLOW FUNCTION -----------------------
QGroupBox * Mainwindow::viewadd(QWidget *centralwidget,QString filter)
{
	QGroupBox *box = new QGroupBox(centralwidget);
    QVBoxLayout *layout = new QVBoxLayout;
	RoomView = new QTableView();
    RoomView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    RoomView->setSelectionBehavior(QAbstractItemView::SelectRows);
    RoomView->setSelectionMode(QAbstractItemView::SingleSelection);
    RoomView->hideColumn(4);
    RoomView->hideColumn(5);
    RoomView->setShowGrid(false);
    RoomView->verticalHeader()->hide();
    RoomView->setAlternatingRowColors(true);
    
    if(filter.isEmpty())
    {
    	RoomView->setModel(modelback(centralwidget));
   	}
   	else
   	{
   		RoomView->setModel(searchmodel(filter));
  	}
    
    QLocale locale = RoomView->locale();
    locale.setNumberOptions(QLocale::OmitGroupSeparator);
    RoomView->setLocale(locale);
        
	layout->addWidget(RoomView,0,0);
	box->setLayout(layout);
	box->setGeometry(QRect(20, 55, 251, 261));
	box->show();    
    return box;
}

void Mainwindow::readSettings()
{
//	QSettings settings(ORGANIZATION,APPNAME);
	QSettings settings("Frankyue","Fsql");
	driver = settings.value("Config/Driver").toString();
	dbName = settings.value("Config/Database").toString();
	user = 	settings.value("Config/User").toString();
	passwd = settings.value("Config/Pass").toString();
	host = settings.value("Config/Host").toString();
}

bool Mainwindow::InitialDatabase()
{	
	bool a = true;
	
	QSqlQuery q;
	//q.exec("drop database qtsql");
	//q.exec("create database qtsql");
	q.exec("use qtsql");
	q.exec("drop table Room");
	q.exec("drop table Record");
	q.exec("drop table Guest");
	q.exec("create table Guest (Name varchar(16), ID bigint key, Contact bitintJD,Num integer)");
	q.exec("create table Room (Num integer key, Price integer, Live integer default 0)");
	q.exec("create table Record (Name varchar(16), Num integer, Days integer, Deposit integer, Stime varchar(10), Etime varchar(10))");
	q.exec("insert into Room values (101, 150, 0)");
	q.exec("insert into Room values (102, 250, 0)");
	q.exec("insert into Room values (103, 250, 0)");
	q.exec("insert into Room values (104, 350, 1)");
	q.exec("insert into Room values (105, 350, 0)");
	q.exec("insert into Room values (106, 450, 1)");
	q.exec("insert into Guest values ('frankyue', 330225198806240013, 15967186764,104)");
	q.exec("insert into Guest values ('syvila', 330225198707190015, 13656642325,106)");
	q.exec("insert into Record values ('frankyue', 104, 2,750,'2009-02-06','2009-02-08')");
	a = q.exec("insert into Record values ('syvila', 106, 1,500,'2009-02-06','2009-02-07')");
	
	//q.exec("drop database qtsql");
	//q.exec("create database qtsql");
	//q.exec("use qtsql");
	//q.exec("create table Guest (Name varchar(16), ID bigint key, Contact double,Num integer)");
	//q.exec("create table Room (Num integer key, Price integer, Live integer default 0)");
	//q.exec("create table Record (Name varchar(16), Num integer, Days integer, Deposit integer, Stime varchar(10), Etime varchar(10))");
	//q.exec("insert into Room values (101, 150, 0)");
	//q.exec("insert into Room values (102, 250, 0)");
	//q.exec("insert into Room values (103, 250, 0)");
	//q.exec("insert into Room values (104, 350, 1)");
	//q.exec("insert into Room values (105, 350, 0)");
	//q.exec("insert into Room values (106, 450, 1)");
	//q.exec("insert into Guest values ('frankyue', 330225198806240013, 15967186764,104)");
	//q.exec("insert into Guest values ('syvila', 330225198707190015, 13656642325,106)");
	//q.exec("insert into Record values ('frankyue', 104, 2,750,'2009-02-06','2009-02-08')");
	//a = q.exec("insert into Record values ('syvila', 106, 1,500,'2009-02-06','2009-02-07')");
	
   	return a;
}

bool Mainwindow::ConnectDatabase(QString driver,QString dbName,QString host,QString user,QString passwd)
{
	db = QSqlDatabase::addDatabase(driver);
	db.setHostName(host);
	db.setDatabaseName(dbName);
	db.setUserName(user);
	db.setPassword(passwd);
//	db.setPort(1);
	bool whetheropen;
	whetheropen = db.open();
	return whetheropen;
	db.close();
}

void Mainwindow::on_RecordButton_clicked()
{
	View * view = new View(this);
	view->exec();
}

void Mainwindow::on_RefreshButton_clicked()
{
	viewadd(this,0);
}

void Mainwindow::on_SearchButton_clicked()
{
	QString key = search_Edit->text();
	
	if(!key.isEmpty())
	{		
		if(!key.data()->isNumber())
		{
			QString filter = "Name = '";
			filter += key;
			filter += "'";
			viewadd(this,filter);
		}
		else
		{			
			QString filter = "Num = ";
			filter += key;
			viewadd(this,filter);
		}
	}
}	


//void Mainwindow::adjustHeader()
//{
     //RoomView->hideColumn(0);
     //RoomView->horizontalHeader()->setResizeMode(1, QHeaderView::Stretch);
     //RoomView->resizeColumnToContents(2);
     //RoomView->resizeColumnToContents(3);
//}

//bool Mainwindow::repaintview()
//{
	//rebool = !rebool;
	//return rebool;
//}

QSqlQueryModel * Mainwindow::modelback(QWidget * centralwidget)
{
	QSqlQueryModel * model = new QSqlQueryModel(centralwidget);
   	model->setQuery("select Num,Price from Room where Num in(select Num from Room where Live = 0)");
	model->setHeaderData(0, Qt::Horizontal, QObject::tr("RoomNum"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Price"));
    return model;
}

QSqlTableModel * Mainwindow::searchmodel(QString filter)
{
	QSqlTableModel * search_Record = new QSqlTableModel;		
	search_Record->setTable("Record");
	search_Record->setFilter(filter);
	search_Record->select();
	search_Record->setHeaderData(0, Qt::Horizontal, QObject::tr("Name"));
    search_Record->setHeaderData(1, Qt::Horizontal, QObject::tr("Num"));
    search_Record->setHeaderData(2, Qt::Horizontal, QObject::tr("Days"));
    //search_Record->setHeaderData(3, Qt::Horizontal, QObject::tr("Stime"));
    return search_Record;
}

//int Mainwindow::count_residue()
//{
	//QSqlTableModel * updateroom = new QSqlTableModel;		//修改已入住的房间
	//updateroom->setTable("Room");
	//updateroom->setFilter("Live = 0");
	//updateroom->select();	
	//return updateroom->rowCount();	
//}

void Mainwindow::about()
 {
     QMessageBox::about(this, tr("Portable Management of Hotel "),
             tr("<p>The <b>Portable Management of Hotel </b>is ued for the portable"
             "device which is very portability ! This version is 1.0 some bug will be"
             " come out! We will do our best to improve it ! Have a good Try! </p> "
             "<p> To contact us frankyue1019@gmail.com</p>"));
 }