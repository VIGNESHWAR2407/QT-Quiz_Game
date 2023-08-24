#include "admin_homepage.h"
#include "ui_admin_homepage.h"
#include "adminedit_verbal.h"
#include "adminedit_technical.h"
#include "adminedit_core.h"
#include "ui_adminedit_apt.h"
#include "adminedit_apt.h"
#include <QMessageBox>
#include <QSqlDatabase>


Admin_homepage::Admin_homepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin_homepage)
{
    ui->setupUi(this);
    QSqlDatabase qn_drop=QSqlDatabase::addDatabase("QSQLITE");
    qn_drop.setDatabaseName("C:/Users/hp/Documents/Qt...Qml/bithacks/QT-Quiz_Game/qn_drop.db");

}

Admin_homepage::~Admin_homepage()
{
    delete ui;
}

void Admin_homepage::on_apt_btn_clicked()
{
    if(ui->adminedit_rb_easy->isChecked()&&ui->apt_btn->isEnabled())
    {

        QMessageBox::information(this,"Question Drop","You are Selected Easy mode - Aptitude \nQuestion Drop");
        Adminedit_apt *adminapt;
        adminapt=new Adminedit_apt(this);
        adminapt->show();
    }
    if(ui->adminedit_rb_med->isChecked()&&ui->apt_btn->isEnabled())
    {
        QMessageBox::information(this,"Question Drop","You are Selected Medium mode - Aptitude \nQuestion Drop");
        Adminedit_apt *adminapt;
        adminapt=new Adminedit_apt(this);
        adminapt->show();
    }
    if(ui->adminedit_rb_hard->isChecked()&&ui->apt_btn->isEnabled())
    {
      QMessageBox::information(this,"Question Drop","You are Selected Hard mode - Aptitude \nQuestion Drop");
        Adminedit_apt *adminapt;
        adminapt=new Adminedit_apt(this);
        adminapt->show();
    }
    if(ui->adminedit_rb_ext->isChecked()&&ui->apt_btn->isEnabled())
    {
      QMessageBox::information(this,"Question Drop","You are Selected Extreme mode - Aptitude \nQuestion Drop");
        Adminedit_apt *adminapt;
        adminapt=new Adminedit_apt(this);
        adminapt->show();
    }
}


void Admin_homepage::on_verbal_btn_clicked()
{
    Adminedit_verbal *adminverbal;
    adminverbal=new Adminedit_verbal(this);
    adminverbal->show();
}


void Admin_homepage::on_tech_btn_clicked()
{
    Adminedit_technical *admintech;
    admintech=new Adminedit_technical(this);
    admintech->show();

}
void Admin_homepage::on_core_btn_clicked()
{
    Adminedit_core *admincore;
    admincore=new Adminedit_core(this);
    admincore->show();
}


void Admin_homepage::on_adminedit_rb_easy_clicked()
{

}

