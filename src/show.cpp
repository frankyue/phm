#include "show.h"
View::View(QWidget *parent)
    : QDialog(parent)
/*View::View(const QString &offices, const QString &images, QWidget *parent)
    : QGraphicsView(parent)*/
{
	addItems();
	this->setWindowTitle("Room Info");
	this->setGeometry(300,250,500,300);
}

void View::addItems()
{
	showlayout = new QGridLayout;
	QFont font;
    font.setStrikeOut(true);

	QSqlQueryModel roomtable;
    roomtable.setQuery("select * from Room;");
    int roomCount = roomtable.rowCount();
    for (int i = 0,j = 0,k = 0; i < roomCount; i++,k++) 
    {    	
    	if( i % 4 == 0 )				//一排放4个房间号
    	{
    		j++;
    		k = 0;
   		}
        QSqlRecord record = roomtable.record(i);
        
        QString name = record.value("Num").toString();
        int live = record.value("Live").toInt();
        
		QPushButton* RoomBtn = new QPushButton(name);
		RoomBtn->setObjectName(name);
		connect(RoomBtn,SIGNAL(clicked()),this,SLOT(Click_Btn()));
		if(live == 1)
		{
			RoomBtn->setFont(font);
		}
		showlayout->addWidget(RoomBtn,j,k,1,1);		 
	}
	setLayout(showlayout);
}

void View::Click_Btn()
{
	QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    int RoomNum = clickedButton->text().toInt();
	Liveinfo *live = new Liveinfo(RoomNum);
	int accepted = live->exec();
	if(accepted == 1)
	{
		accept();
	}
}
