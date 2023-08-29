#ifndef ADMIN_HOMEPAGE_H
#define ADMIN_HOMEPAGE_H

#include <QDialog>
#include <QMessageBox>
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QFileInfo>
namespace Ui {
class Admin_homepage;
}

class Admin_homepage : public QDialog
{
    Q_OBJECT

public:
    explicit Admin_homepage(QWidget *parent = nullptr);
    ~Admin_homepage();


private slots:
    void on_apt_btn_clicked();

    void on_verbal_btn_clicked();

    void on_tech_btn_clicked();

    void on_core_btn_clicked();

    void on_adminedit_rb_easy_clicked();

private:
    Ui::Admin_homepage *ui;
};

#endif // ADMIN_HOMEPAGE_H
