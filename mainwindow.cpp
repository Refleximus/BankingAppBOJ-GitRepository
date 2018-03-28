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
void MainWindow::on_pushButton_clicked()            //TEST MANIPULATING MONEY VALUES
{
    checkingBalance = checkingBalance + 1;
    ui->labelCBalValue->setNum(checkingBalance);
}

void MainWindow::on_pushButton_3_clicked()          //TEST MANIPULATING MONEY VALUES
{
    checkingBalance = checkingBalance - 1;
    ui->labelCBalValue->setNum(checkingBalance);
}

void MainWindow::on_pushButton_2_clicked()          //TEST MANIPULATING MONEY VALUES
{
    savingsBalance = savingsBalance + 1;
    ui->labelSBalValue->setNum(savingsBalance);
}

void MainWindow::on_pushButton_4_clicked()          //TEST MANIPULATING MONEY VALUES
{
    if (savingsBalance - 1 < 0)     //============
    {
        Error001 error001;
        error001.setModal(true);
        error001.exec();
    }
    else
    {
        savingsBalance = savingsBalance - 1;
        ui->labelSBalValue->setNum(savingsBalance);
    }
}
//==================================================================================


void MainWindow::on_buttonLogout_clicked()
{
    close();
}
