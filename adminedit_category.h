#ifndef ADMINEDIT_CATEGORY_H
#define ADMINEDIT_CATEGORY_H

#include <QDialog>

namespace Ui {
class Adminedit_category;
}

class Adminedit_category : public QDialog
{
    Q_OBJECT

public:
    explicit Adminedit_category(QWidget *parent = nullptr);
    ~Adminedit_category();

private:
    Ui::Adminedit_category *ui;
};

#endif // ADMINEDIT_CATEGORY_H
