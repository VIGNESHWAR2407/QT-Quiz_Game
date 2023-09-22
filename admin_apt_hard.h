#ifndef ADMIN_APT_HARD_H
#define ADMIN_APT_HARD_H

#include <QDialog>

namespace Ui {
class admin_apt_hard;
}

class admin_apt_hard : public QDialog
{
    Q_OBJECT

public:
    explicit admin_apt_hard(QWidget *parent = nullptr);
    ~admin_apt_hard();

private slots:
    void on_submitbtn_clicked();

    void on_quit_clicked();

private:
    Ui::admin_apt_hard *ui;
};

#endif // ADMIN_APT_HARD_H
