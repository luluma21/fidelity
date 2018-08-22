#include "addpurchase.h"
#include "ui_addpurchase.h"
#include <QMessageBox>

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
    int reponse = QMessageBox::question(this, "Verification", "Is this the right amount ?", QMessageBox::Yes | QMessageBox::No);

        if (reponse == QMessageBox::Yes)
        {
            r_amount=ui->amount->value();
            close();
        }
        else if (reponse == QMessageBox::No)
        {
            // tu ne fait rien ...
        }

}

void AddPurchase::on_exit_button_clicked()
{
    close();
}
