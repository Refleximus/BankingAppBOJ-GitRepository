#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <QDialog>

namespace Ui {
class Deposit;
}

class Deposit : public QDialog
{
    Q_OBJECT

public:
    explicit Deposit(QWidget *parent = 0);
    ~Deposit();

private slots:
    void on_buttonClose_clicked();

private:
    Ui::Deposit *ui;
};

#endif // DEPOSIT_H
