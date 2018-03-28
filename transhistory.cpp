#include "transhistory.h"
#include "ui_transhistory.h"

TransHistory::TransHistory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TransHistory)
{
    ui->setupUi(this);
}

TransHistory::~TransHistory()
{
    delete ui;
}

void TransHistory::on_buttonClose_clicked()
{
    close();
}
