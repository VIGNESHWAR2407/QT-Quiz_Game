#ifndef ADMINEDIT_VERBAL_H
#define ADMINEDIT_VERBAL_H

#include <QDialog>

namespace Ui {
class Adminedit_verbal;
}

class Adminedit_verbal : public QDialog
{
    Q_OBJECT

public:
    explicit Adminedit_verbal(QWidget *parent = nullptr);
    ~Adminedit_verbal();

private:
    Ui::Adminedit_verbal *ui;
};

#endif // ADMINEDIT_VERBAL_H
