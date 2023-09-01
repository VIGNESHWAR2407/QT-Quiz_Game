#include "adminedit_verbal.h"
#include "ui_adminedit_verbal.h"

#include "admin_homepage.h"
#include "ui_admin_homepage.h"

#include <QSqlDatabase>


Adminedit_verbal::Adminedit_verbal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adminedit_verbal)
{
    ui->setupUi(this);
}

Adminedit_verbal::~Adminedit_verbal()
{
    delete ui;
}
