#ifndef TRANSFER_H
#define TRANSFER_H

#include <QDialog>

namespace Ui {
class Transfer;
}

class Transfer : public QDialog
{
    Q_OBJECT

public:
    explicit Transfer(QWidget *parent = 0);
    ~Transfer();

private slots:
    void on_buttonClose_clicked();

private:
    Ui::Transfer *ui;
};

#endif // TRANSFER_H
