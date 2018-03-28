#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->labelCBalValue->setNum(checkingBalance);
    ui->labelSBalValue->setNum(savingsBalance);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonChecking_clicked()
{
//  MODAL APPROACH
    CheckingDialog checkingDialog;
    checkingDialog.setModal(true);        //this causes THIS window to be the only window able to be clicked upon.
    checkingDialog.exec();

//  MODALESS APPROACH
//    checkingDialog = new CheckingDialog(this);
//    checkingDialog->show();
}

void MainWindow::on_buttonSavings_clicked()
{
//  MODALESS
//    savingsDialog = new SavingsDialog(this);
//    savingsDialog->show();

//  MODAL
    SavingsDialog savingsDialog;
    savingsDialog.setModal(true);
    savingsDialog.exec();
}

void MainWindow::on_buttonDeposit_clicked()
{
//  MODALESS
//    deposit = new Deposit(this);
//    deposit->show();

//  MODAL
    Deposit deposit;
    deposit.setModal(true);
    deposit.exec();
}

void MainWindow::on_buttonTransfer_clicked()
{
//  MODALESS
//    transfer = new Transfer(this);
//    transfer->show();

    Transfer transfer;
    transfer.setModal(true);
    transfer.exec();
}

void MainWindow::on_buttonHistory_clicked()
{
//  MODALESS
//    transHistory = new TransHistory(this);
//    transHistory->show();

//  MODAL
    TransHistory transhistory;
    transhistory.setModal(true);
    transhistory.exec();
}

void MainWindow::on_buttonWithdraw_clicked()
{
//  MODALESS
//    withdraw = new Withdraw(this);
//    withdraw->show();

//  MODAL
    Withdraw withdraw;
    withdraw.setModal(true);
    withdraw.exec();
}


//TESTING AREA
//==================================================================================
void MainWindow::on_pushButton_clicked()                         //TEST MANIPULATING MONEY VALUES
{
    checkingBalance = checkingBalance + 1;
    moneylog += "+$1(Checking) ";
    ui->labelCBalValue->setNum(checkingBalance);
}

void MainWindow::on_pushButton_3_clicked()                       //TEST MANIPULATING MONEY VALUES
{
    if (checkingBalance - 1 < 0)
    {
        Error002 error002;
        error002.exec();
        checkingBalance = checkingBalance - 1;
        checkingBalance = checkingBalance - 10;
        moneylog += "-$1(Checking) -$10(Overdraft) ";
        ui->labelCBalValue->setNum(checkingBalance);

    }
    else
    {
        checkingBalance = checkingBalance - 1;
        moneylog += "-$1(Checking) ";
        ui->labelCBalValue->setNum(checkingBalance);
    }

}

void MainWindow::on_pushButton_2_clicked()                       //TEST MANIPULATING MONEY VALUES
{
    savingsBalance = savingsBalance + 1;
    moneylog += "+$1(Savings) ";
    ui->labelSBalValue->setNum(savingsBalance);
}

void MainWindow::on_pushButton_4_clicked()                       //TEST MANIPULATING MONEY VALUES
{
    if (savingsBalance - 1 < 0)                                  //IF -1 FROM savingsBalance MAKES savingsBalance < 0, THROW ERROR
    {
        Error001 error001;
        error001.setModal(true);
        error001.exec();
    }
    else
    {
        savingsBalance = savingsBalance - 1;                    //ELSE REDUCE savingsBalance by 1
        moneylog += "-$1(Savings) ";                                      //RECORD TO LOG
        ui->labelSBalValue->setNum(savingsBalance);             //UPDATE LABEL DISPLAYING VALUE OF SAVINGS ACCOUNT
    }
}

void MainWindow::on_buttonPrintHistory_clicked()              //PRINT MONEYLOG MAINWINDOW
{
     ui->textBrowserHistory->setText(moneylog);
}
//==================================================================================


void MainWindow::on_buttonLogout_clicked()
{
    close();
}

