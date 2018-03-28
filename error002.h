#ifndef ERROR002_H
#define ERROR002_H

#include <QDialog>

namespace Ui {
class Error002;
}

class Error002 : public QDialog
{
    Q_OBJECT

public:
    explicit Error002(QWidget *parent = 0);
    ~Error002();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Error002 *ui;
};

#endif // ERROR002_H
