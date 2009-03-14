#ifndef VIEW_H
#define VIEW_H


#include <QtGui>
#include <QtSql>
#include <QSqlQueryModel>
#include "liveinfo.h"
class Liveinfo;


//! [0]
class View : public QDialog
{
    Q_OBJECT

public:
//    View(const QString &offices, const QString &images, QWidget *parent = 0);
    View(QWidget *parent = 0);
protected:
//    void mouseReleaseEvent(QMouseEvent *event);
//! [0]

//! [1]
private slots:
//    void updateImage(int id, const QString &fileName);
	  void Click_Btn();
//	  QString GetName();
//! [1]

//! [2]
private:
    void addItems();
//    InformationWindow* findWindow(int id);
//    void showInformation(ImageItem *image);

    QGraphicsScene *scene;
//    QList<InformationWindow *> informationWindows;
//! [2] //! [3]
//    QSqlRelationalTableModel *officeTable;
	QGridLayout* showlayout;
};
//! [3]

#endif
