#include "loginpage.h"
#include "ui_loginpage.h"
#include "catergory.h"
#include "loginpage.h"
#include "apt_category.h"
#include "admin_homepage.h"
#include<QMessageBox>
loginpage::loginpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginpage)
{
    ui->setupUi(this);

    QSqlDatabase login = QSqlDatabase::addDatabase("QSQLITE");
<<<<<<< HEAD
    login.setDatabaseName("C:/Users/Karishhaju/OneDrive/Desktop/QT-Quiz_Game-main (2)/QT-Quiz_Game-main/sql_db.db");


=======
    login.setDatabaseName("C:/Users/Karishhaju/OneDrive/Desktop/qt/QT-Quiz_Game/QT-Quiz_Game-main/sql_db.db");
>>>>>>> 25f0b628cd13990f9a1f0c82105a79c4880cbd1c
    if(!login.open())
     ui->status_label->setText("Not found");
    else
     ui->status_label->setText("Connected");

}

loginpage::~loginpage()
{
    delete ui;
}

void loginpage::on_login_btn_clicked()
{
    QString email=ui->email->text();
    QString id=ui->id->text();

    QSqlDatabase login;
    if(!login.isOpen())
        qDebug()<<"DB is connceted is failed";

    QSqlQuery query;

    if(query.exec("SELECT * FROM login WHERE email='"+email+"' AND id='"+id+"'"))
    {
        int count=0;
        while(query.next())
        {
            count++;
        }
        if(count==1)
        {
            ui->db_label->setText("Email and ID is correct");
//            hide();
            catergory *cater;
            cater =new catergory(this);
            cater->show();
        }
        else if(count<1)
            ui->db_label->setText("Email and ID is incorrect");


    }
    if(email=="adminthecreator" && id=="admin")
    {
        hide();
        Admin_homepage *adminentry;
        adminentry = new Admin_homepage(this);
        adminentry->show();
    }


}

