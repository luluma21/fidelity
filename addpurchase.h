#ifndef ADDPURCHASE_H
#define ADDPURCHASE_H

#include <QDialog>

namespace Ui {
class AddPurchase;
}

class AddPurchase : public QDialog
{
    Q_OBJECT

public:
    explicit AddPurchase(QWidget *parent = 0);
    ~AddPurchase();
    int r_amount;

private slots:
    void on_ok_button_clicked();

    void on_exit_button_clicked();

private:
    Ui::AddPurchase *ui;
};

#endif // ADDPURCHASE_H
