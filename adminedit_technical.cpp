#include "adminedit_technical.h"
#include "ui_adminedit_technical.h"

Adminedit_technical::Adminedit_technical(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adminedit_technical)
{
    ui->setupUi(this);
}

Adminedit_technical::~Adminedit_technical()
{
    delete ui;
}
