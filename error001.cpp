#include "error001.h"
#include "ui_error001.h"

Error001::Error001(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Error001)
{
    ui->setupUi(this);
}

Error001::~Error001()
{
    delete ui;
}

void Error001::on_pushButton_clicked()
{
    close();
}
