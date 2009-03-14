#ifndef __CHECK_H__
#define __CHECK_H__

// place your code here
#include <QtGui>
#include <QtSql>
#include <QSqlQueryModel>

class Check : public QDialog
{
	Q_OBJECT
public:
	Check(int roomnum,int days,int deposit,int price,QWidget *parent = 0);
	int Num;
	
	void UpdateRoom(int RoomNum,int change);
	void Updatetable(QString table,QString filter);
public slots:
	void submit();
	void cancel(){ reject(); }
};

#endif // __CHECK_H__
