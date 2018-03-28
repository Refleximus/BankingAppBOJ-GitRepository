#ifndef ERROR001_H
#define ERROR001_H

#include <QDialog>

namespace Ui {
class Error001;
}

class Error001 : public QDialog
{
    Q_OBJECT

public:
    explicit Error001(QWidget *parent = 0);
    ~Error001();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Error001 *ui;
};

#endif // ERROR001_H
