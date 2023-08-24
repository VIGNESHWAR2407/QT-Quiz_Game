#include "apt_easy_page.h"
#include "ui_apt_easy_page.h"

int q1,q2,q3,q4,q5,count;

Apt_easy_page::Apt_easy_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Apt_easy_page)
{
    ui->setupUi(this);

}

Apt_easy_page::~Apt_easy_page()
{
    delete ui;
}

void Apt_easy_page::on_rb2_q1_clicked()
{
   q1=1;
}
void Apt_easy_page::on_rb3_q2_clicked()
{
    q2=1;
}
void Apt_easy_page::on_rb4_q3_clicked()
{
    q3=1;
}
void Apt_easy_page::on_rb1_q4_clicked()
{
    q4=1;
}
void Apt_easy_page::on_rb3_q5_clicked()
{
    q5=1;
}


void Apt_easy_page::on_submit_clicked()
{
    count=q1+q2+q3+q4+q5;
    ui->label->setText(QString::number(count,10));
}

