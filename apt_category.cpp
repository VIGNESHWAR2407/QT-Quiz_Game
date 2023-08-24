#include "apt_category.h"
#include "ui_apt_category.h"
#include "apt_category.h"
#include "apt_easy_page.h"


#include <QMessageBox>

Apt_category::Apt_category(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Apt_category)
{
    ui->setupUi(this);

}

Apt_category::~Apt_category()
{
    delete ui;
}


void Apt_category::on_apt_easy_btn_clicked()
{
//    hide();
    Apt_easy_page *easy_page;
    easy_page=new Apt_easy_page(this);
    easy_page->show();

}

