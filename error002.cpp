#include "error002.h"
#include "ui_error002.h"

Error002::Error002(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Error002)
{
    ui->setupUi(this);
}

Error002::~Error002()
{
    delete ui;
}

void Error002::on_pushButton_clicked()
{
    close();
}
