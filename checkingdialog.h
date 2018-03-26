#ifndef CHECKINGDIALOG_H
#define CHECKINGDIALOG_H

#include <QDialog>

namespace Ui {
class CheckingDialog;
}

class CheckingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CheckingDialog(QWidget *parent = 0);
    ~CheckingDialog();


private slots:

    void on_buttonOK_clicked();

private:
    Ui::CheckingDialog *ui;
};

#endif // CHECKINGDIALOG_H
