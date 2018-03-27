#include "savingsdialog.h"
#include "ui_savingsdialog.h"


SavingsDialog::SavingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SavingsDialog)
{
    ui->setupUi(this);

}

SavingsDialog::~SavingsDialog()
{
    delete ui;
}

void SavingsDialog::on_buttonOKSavings_clicked()
{
    hide();
}
