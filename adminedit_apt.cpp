#include "adminedit_apt.h"
#include "ui_adminedit_apt.h"
#include "admin_homepage.h"
#include "ui_admin_homepage.h"

#include <QSqlDatabase>

Adminedit_apt::Adminedit_apt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adminedit_apt)
{
    ui->setupUi(this);
    QSqlDatabase qn_drop=QSqlDatabase::addDatabase("QSQLITE");
    qn_drop.setDatabaseName("C:/Users/hp/Documents/Qt...Qml/bithacks/QT-Quiz_Game/qn_drop.db");

    if(!qn_drop.open())
     ui->qn_db_status->setText("Not found");
    else
     ui->qn_db_status->setText("Connected");

}

Adminedit_apt::~Adminedit_apt()
{
    delete ui;
}


void Adminedit_apt::on_submitbtn_clicked()
{
    QString qn_editor=ui->qn_editor->text();
    QString qn_number =ui->qn_number->text();
    QString choice_1 =ui->choice_1->text();
    QString choice_2 =ui->choice_2->text();
    QString choice_3 =ui->choice_3->text();
    QString choice_4 =ui->choice_4->text();

    QSqlDatabase qn_drop;
    if(!qn_drop.isOpen())
        qDebug()<<"DB is connceted is failed";

    QSqlQuery qry_qn;
    qry_qn.prepare("insert into question_apt_easy[(qn_editor,qn_number,choice_1,choice_2,choice_3,choice_4)]values ('"+qn_editor+"','"+qn_number+"','"+choice_1+"','"+choice_2+"','"+choice_3+"','"+choice_4+"')");
    if(qry_qn.exec())
    {
        QMessageBox::information(this,"Data Stored","Question Dropped");
    }
    else
       QMessageBox::information(this,"Data Stored","Question Drop Unsuccessful");

}

