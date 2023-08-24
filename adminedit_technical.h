#ifndef ADMINEDIT_TECHNICAL_H
#define ADMINEDIT_TECHNICAL_H

#include <QDialog>

namespace Ui {
class Adminedit_technical;
}

class Adminedit_technical : public QDialog
{
    Q_OBJECT

public:
    explicit Adminedit_technical(QWidget *parent = nullptr);
    ~Adminedit_technical();

private:
    Ui::Adminedit_technical *ui;
};

#endif // ADMINEDIT_TECHNICAL_H
