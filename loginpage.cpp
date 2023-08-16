#include "loginpage.h"
#include "ui_loginpage.h"
#include "catergory.h"

#include<QMessageBox>

loginpage::loginpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginpage)
{
    ui->setupUi(this);

    QSqlDatabase login = QSqlDatabase::addDatabase("QSQLITE");
    login.setDatabaseName("C:/Users/hp/Documents/Qt...Qml/bithacks/sql_db.db");

    if(login.open())
     ui->status_label->setText("Connected");
    else
        ui->status_label->setText("Not found");

    QString email=ui->email->text();
    QString id=ui->id->text();
    QSqlQuery query;

    if(query.exec("SELECT * FROM login WHERE email='"+email+"' AND id='"+id+"'"))
    {
        int count=0;
        while(query.next())
        {
            count++;
        }
        if(count==1)
            QMessageBox::information(this,"Login","Login Successful");
        else if(count>1)
            QMessageBox::information(this,"Login","Login Duplicated");
        else
            QMessageBox::information(this,"Login","Login Failed");

    }
}

loginpage::~loginpage()
{
    delete ui;
}

void loginpage::on_login_btn_clicked()
{

    hide();
    catergory *cater;
    cater =new catergory(this);
    cater->show();
}

