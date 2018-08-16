#include "verify.h"
#include "ui_verify.h"

Verify::Verify(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Verify)
{
    ui->setupUi(this);
    verif_token=false;
}

Verify::~Verify()
{
    delete ui;
}

void Verify::on_cancel_button_clicked()
{
    close();
}

void Verify::on_val_button_clicked()
{
    verif_token=true;


}
