#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QDialog>
#include<QtSql>
#include<QDebug>
#include<QFileInfo>

namespace Ui {
class loginpage;
}

class loginpage : public QDialog
{
    Q_OBJECT

public:
    explicit loginpage(QWidget *parent = nullptr);
    ~loginpage();

private slots:
    void on_login_btn_clicked();

private:
    Ui::loginpage *ui;
};

#endif // LOGINPAGE_H
