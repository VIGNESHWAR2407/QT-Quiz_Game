#include "catergory.h"
#include "ui_catergory.h"

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
