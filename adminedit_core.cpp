#include "adminedit_core.h"
#include "ui_adminedit_core.h"

Adminedit_core::Adminedit_core(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adminedit_core)
{
    ui->setupUi(this);
}

Adminedit_core::~Adminedit_core()
{
    delete ui;
}
