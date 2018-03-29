#include "checkingdialog.h"
#include "ui_checkingdialog.h"
#include "mainwindow.h"


CheckingDialog::CheckingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckingDialog)
{

    MainWindow myWindow;
    myWindow.getCheckingBalance();
    ui->setupUi(this);
    ui->labelCBalValue->setNum(myWindow.getCheckingBalance());

}

CheckingDialog::~CheckingDialog()
{
    delete ui;
}

void CheckingDialog::on_buttonOK_clicked()
{
    close();
}
