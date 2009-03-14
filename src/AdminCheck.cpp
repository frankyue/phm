#include "AdminCheck.h"

// place your code here
#include <QtGui/QtGui>

AdminCheckDlg::AdminCheckDlg(QWidget * parent) : QDialog(parent)
{
	QLabel* waring = new QLabel("Warring:Be sure what you will do!!!");
    //设置label和editline
	QLabel* usrLabel = new QLabel("Username");
	QLabel* pwdLabel = new QLabel("Password");
	usrLineEdit = new QLineEdit;
	pwdLineEdit = new QLineEdit;
	pwdLineEdit->setEchoMode(QLineEdit::Password);
	
	//建立表格布局，并将label和lineedit放入规定位置
	QGridLayout* gridLayout = new QGridLayout;
	gridLayout->addWidget(waring,0,0,1,2);
	gridLayout->addWidget(usrLabel,1,0,1,1);
	gridLayout->addWidget(pwdLabel,2,0,1,1);
	gridLayout->addWidget(usrLineEdit,1,1,1,3);
	gridLayout->addWidget(pwdLineEdit,2,1,1,3);
	
	//建立一个水平布局，放入按钮并设置宽度
	QPushButton* okButton = new QPushButton("OK");
	QPushButton* cancelButton = new QPushButton("Cancel");
	QHBoxLayout* btnLayout = new QHBoxLayout;
	btnLayout->setSpacing(60);
	btnLayout->addWidget(okButton);
	btnLayout->addWidget(cancelButton);
		
	
	QVBoxLayout* dlgLayout = new QVBoxLayout;
	dlgLayout->setMargin(40);   			//设置边框宽度
	dlgLayout->addLayout(gridLayout); 		//放入表格布局
	dlgLayout->addStretch(40);   			//怎家dlgLayout内布局间的竖直距离
	dlgLayout->addLayout(btnLayout);		//放入水平布局
	setLayout(dlgLayout);  					//设置dlglayout为顶层布局
	
	connect(okButton,SIGNAL(clicked()),this,SLOT(accept()));
	connect(cancelButton,SIGNAL(clicked()),this,SLOT(reject()));
		
	setWindowTitle("Waring!");   //设置窗口标题
	resize(200,200);
}

void AdminCheckDlg::accept()
{
	if(usrLineEdit->text().trimmed() == tr("root") && pwdLineEdit->text() == tr("123456"))   //trimmed() 返回移除了开头和结尾的空白字符
	{
		QDialog::accept();
	}
	else
	{
		QMessageBox::warning(this,"warning","username or password wrong",QMessageBox::Yes);
		usrLineEdit->setFocus();
	}
}