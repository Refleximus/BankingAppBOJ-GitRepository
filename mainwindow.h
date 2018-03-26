#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "checkingdialog.h"
#include "savingsdialog.h"
#include "deposit.h"

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

private:
    Ui::MainWindow *ui;
    CheckingDialog *checkingDialog;
    SavingsDialog *savingsDialog;
    Deposit *deposit;

};

#endif // MAINWINDOW_H
