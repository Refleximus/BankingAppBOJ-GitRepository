#ifndef SAVINGSDIALOG_H
#define SAVINGSDIALOG_H

#include <QDialog>

namespace Ui {
class SavingsDialog;
}

class SavingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SavingsDialog(QWidget *parent = 0);
    ~SavingsDialog();

private slots:
    void on_buttonOKSavings_clicked();

private:
    Ui::SavingsDialog *ui;
};

#endif // SAVINGSDIALOG_H
