#include "addpurchase.h"
#include "ui_addpurchase.h"

AddPurchase::AddPurchase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPurchase)
{
    ui->setupUi(this);
}

AddPurchase::~AddPurchase()
{
    delete ui;
}

void AddPurchase::on_ok_button_clicked()
{
    r_amount=ui->amount->value();
    close();
}

void AddPurchase::on_exit_button_clicked()
{
    close();
}
