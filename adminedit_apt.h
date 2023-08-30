#ifndef ADMINEDIT_APT_H
#define ADMINEDIT_APT_H

#include <QDialog>

namespace Ui {
class Adminedit_apt;
}

class Adminedit_apt : public QDialog
{
    Q_OBJECT

public:
    explicit Adminedit_apt(QWidget *parent = nullptr);
    ~Adminedit_apt();

private slots:
    void on_submitbtn_clicked();
    void on_quit_clicked();
private:
    Ui::Adminedit_apt *ui;
};

#endif // ADMINEDIT_APT_H
