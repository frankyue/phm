#ifndef __LIVEINFO_H__
#define __LIVEINFO_H__

// place your code here
#include <QtGui>
#include <QtSql>
#include <QSqlQueryModel>

#include "check.h"

class Liveinfo : public QDialog
{
    Q_OBJECT
public:
	Liveinfo(int getroom,QWidget *parent = 0);
	bool Leavebool;
	bool Liveinbool;
    
    QString Estime;
    QString Eetime;
	QString Sdays;
    QString Sdeposit;
    QString Sprice;
    void UpdateRoom(int RoomNum,int change); 
	int AddRecord(const QString &name,const QString &contact,const QString &id);//,int days,int deposit);
protected:
	void leave();
	void livein();
	QGridLayout* mainlayout;
	QGridLayout* buttonlayout;
	int RoomNum;	
	
	QLineEdit* NameEdit; 
    QLineEdit* ContactEdit;
    QLineEdit* IDEdit;
    QLineEdit* DaysEdit;
    QLineEdit* DespoitEdit;
    QLineEdit* RoomNumEdit;
    QLineEdit* PriceEdit;
    QLineEdit* LiveinEdit;
    QLineEdit* LeaveEdit;
    
public slots:

	void SubmitButton();
	void ModifyButton();
	void CheckoutButton();
	void CancelButton();
private:

};
#endif // __LIVEINFO_H__
