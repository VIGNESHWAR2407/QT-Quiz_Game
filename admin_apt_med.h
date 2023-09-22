#ifndef ADMIN_APT_MED_H
#define ADMIN_APT_MED_H

#include <QDialog>

namespace Ui {
class admin_apt_med;
}

class admin_apt_med : public QDialog
{
    Q_OBJECT

public:
    explicit admin_apt_med(QWidget *parent = nullptr);
    ~admin_apt_med();

private slots:
    void on_submitbtn_clicked();

    void on_quit_clicked();

private:
    Ui::admin_apt_med *ui;
};

#endif // ADMIN_APT_MED_H
