#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "checkingdialog.h"
#include "savingsdialog.h"
#include "deposit.h"
#include "transfer.h"
#include "transhistory.h"
#include "withdraw.h"
#include "error001.h"
#include "error002.h"
#include "loginwindow.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
//    double savingsBalance = 0.00;
//    double checkingBalance = 0.00;

//DOUBLE GETTER FOR checkingBalance VARIABLE;
    double getCheckingBalance() { return checkingBalance; }


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

    void on_buttonLogout_clicked();

    void on_buttonPrintHistory_clicked();

protected:
    Ui::MainWindow *ui;
    CheckingDialog *checkingDialog;
    SavingsDialog *savingsDialog;
    Deposit *deposit;
    Transfer *transfer;
    TransHistory *transHistory;
    Withdraw *withdraw;
    Error001 *error001;
    Error002 *error002;
    //LoginWindow *loginwindow;

    double savingsBalance = 0.00;
    double checkingBalance = 0.00;
    const double overdraftFee = 10.00;
    QString moneylog;

    friend class CheckingDialog;
};

#endif // MAINWINDOW_H
