#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButtonExit_clicked()
{
    close();
}

void LoginWindow::on_pushButtonLogin_clicked()      //LAUNCH THE MainWindow FROM THE LoginWindow via "Login" button
{
    MainWindow *w = new MainWindow();
    w->show();
    close();
}
