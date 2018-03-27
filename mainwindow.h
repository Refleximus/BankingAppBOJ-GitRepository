#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "checkingdialog.h"
#include "savingsdialog.h"
#include "deposit.h"
#include "transfer.h"
#include "transhistory.h"
#include "withdraw.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    double savingsBalance = 0.00;
    double checkingBalance = 0.00;

private slots:

    void on_buttonChecking_clicked();

    void on_buttonSavings_clicked();

    void on_buttonDeposit_clicked();

    void on_buttonTransfer_clicked();

    void on_buttonHistory_clicked();

    void on_buttonWithdraw_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    CheckingDialog *checkingDialog;
    SavingsDialog *savingsDialog;
    Deposit *deposit;
    Transfer *transfer;
    TransHistory *transHistory;
    Withdraw *withdraw;
};

#endif // MAINWINDOW_H
