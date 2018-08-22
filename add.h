#ifndef ADD_H
#define ADD_H

#include <QDialog>
#include "datacust.h"

namespace Ui {
class Add;
}

class Add : public QDialog
{
    Q_OBJECT

public:
    explicit Add(QWidget *parent = 0);
    ~Add();
    QString rname;
    QString rfirstname;
    QString rbdate;
    QString raddress;
    QString rphone;
    QString rmail;
    bool rstatus;


private slots:
    void on_cancelButton_clicked();

    void on_okButton_clicked();

private:
    Ui::Add *ui;
};

#endif // ADD_H
