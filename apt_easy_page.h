#ifndef APT_EASY_PAGE_H
#define APT_EASY_PAGE_H

#include <QDialog>

namespace Ui {
class Apt_easy_page;
}

class Apt_easy_page : public QDialog
{
    Q_OBJECT

public:
    explicit Apt_easy_page(QWidget *parent = nullptr);
    ~Apt_easy_page();

private slots:
    void on_rb2_q1_clicked();

    void on_rb3_q2_clicked();

    void on_rb4_q3_clicked();

    void on_rb1_q4_clicked();

    void on_rb3_q5_clicked();

    void on_submit_clicked();

private:
    Ui::Apt_easy_page *ui;
};

#endif // APT_EASY_PAGE_H
