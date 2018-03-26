#ifndef WITHDRAW_H
#define WITHDRAW_H

#include <QDialog>

namespace Ui {
class Withdraw;
}

class Withdraw : public QDialog
{
    Q_OBJECT

public:
    explicit Withdraw(QWidget *parent = 0);
    ~Withdraw();

private slots:
    void on_buttonClose_clicked();

private:
    Ui::Withdraw *ui;
};

#endif // WITHDRAW_H
