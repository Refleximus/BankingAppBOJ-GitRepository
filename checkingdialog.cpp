#include "checkingdialog.h"
#include "ui_checkingdialog.h"
#include "mainwindow.h"


CheckingDialog::CheckingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckingDialog)
{
    ui->setupUi(this);


}

CheckingDialog::~CheckingDialog()
{
    delete ui;
}

void CheckingDialog::on_buttonOK_clicked()
{
    hide();
}
