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
//    MODAL APPROACH
//    CheckingDialog checkingDialog;
//    //checkingDialog.setModal(true);        //this causes THIS window to be the only window able to be clicked upon.
//    checkingDialog.exec();

//  MODALESS APPROACH
    checkingDialog = new CheckingDialog(this);
    checkingDialog->show();
}

void MainWindow::on_buttonSavings_clicked()
{
    savingsDialog = new SavingsDialog(this);
    savingsDialog->show();
}

void MainWindow::on_buttonDeposit_clicked()
{
    deposit = new Deposit(this);
    deposit->show();
}
