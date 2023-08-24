#include "catergory.h"
#include "ui_catergory.h"
#include "apt_category.h"

catergory::catergory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::catergory)
{
    ui->setupUi(this);
}

catergory::~catergory()
{
    delete ui;
}

void catergory::on_apti_btn_clicked()
{
//    hide();
    Apt_category *aptcat;
    aptcat=new Apt_category(this);
    aptcat->show();
}

