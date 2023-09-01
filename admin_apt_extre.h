#ifndef ADMIN_APT_EXTRE_H
#define ADMIN_APT_EXTRE_H

#include <QDialog>

namespace Ui {
class admin_apt_extre;
}

class admin_apt_extre : public QDialog
{
    Q_OBJECT

public:
    explicit admin_apt_extre(QWidget *parent = nullptr);
    ~admin_apt_extre();

private:
    Ui::admin_apt_extre *ui;
};

#endif // ADMIN_APT_EXTRE_H
