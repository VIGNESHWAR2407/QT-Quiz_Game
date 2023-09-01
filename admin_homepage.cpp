#include "admin_homepage.h"
#include "ui_admin_homepage.h"

#include "adminedit_verbal.h"
#include "adminedit_technical.h"
#include "adminedit_core.h"

#include "ui_adminedit_apt.h"
#include "adminedit_apt.h"

#include "ui_admin_apt_med.h"
#include "admin_apt_med.h"

#include "ui_admin_apt_hard.h"
#include "admin_apt_hard.h"

#include <QMessageBox>
#include <QSqlDatabase>


Admin_homepage::Admin_homepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin_homepage)
{
    ui->setupUi(this);
    QSqlDatabase qn_drop=QSqlDatabase::addDatabase("QSQLITE");
<<<<<<< HEAD
    qn_drop.setDatabaseName("C:/Users/Karishhaju/OneDrive/Desktop/QT-Quiz_Game-main (2)/QT-Quiz_Game-main/qn_drop.db");
=======
    qn_drop.setDatabaseName("C:/Users/Karishhaju/OneDrive/Desktop/qt/QT-Quiz_Game/QT-Quiz_Game-main/qn_drop.db");
>>>>>>> 25f0b628cd13990f9a1f0c82105a79c4880cbd1c

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
        admin_apt_med *adminaptmed;
        adminaptmed =new admin_apt_med(this);
        adminaptmed->show();
    }
    if(ui->adminedit_rb_hard->isChecked()&&ui->apt_btn->isEnabled())
    {
      QMessageBox::information(this,"Question Drop","You are Selected Hard mode - Aptitude \nQuestion Drop");
        admin_apt_hard *adminapthard;
        adminapthard=new admin_apt_hard(this);
        adminapthard->show();
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
