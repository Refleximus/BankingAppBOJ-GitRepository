#ifndef TRANSHISTORY_H
#define TRANSHISTORY_H

#include <QDialog>


namespace Ui {
class TransHistory;
}

class TransHistory : public QDialog
{
    Q_OBJECT

public:
    explicit TransHistory(QWidget *parent = 0);
    ~TransHistory();

private slots:
    void on_buttonClose_clicked();

private:
    Ui::TransHistory *ui;
};

#endif // TRANSHISTORY_H
