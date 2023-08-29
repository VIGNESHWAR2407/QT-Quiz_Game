#ifndef APT_CATEGORY_H
#define APT_CATEGORY_H
#include <QDialog>
#include <QTimer>
#include <QDebug>

namespace Ui {
class Apt_category;
}

class Apt_category : public QDialog
{
    Q_OBJECT

public:
    explicit Apt_category(QWidget *parent = nullptr);
    ~Apt_category();

private slots:
    void on_apt_easy_btn_clicked();

private:
    Ui::Apt_category *ui;

};

#endif // APT_CATEGORY_H
