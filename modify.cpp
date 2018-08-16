#include "modify.h"
#include "ui_modify.h"
#include "addpurchase.h"

Modify::Modify(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Modify)
{
    ui->setupUi(this);
}

Modify::~Modify()
{
    delete ui;
}

void Modify::on_end_button_clicked()
{
    close();
}

void Modify::on_add_button_clicked()
{
    AddPurchase addp_window;
    addp_window.exec();

}

void Modify::initializeParameters(QString n, QString fn, QString bd, QString a, QString pn, QString m, QString ct)
{
    ui->var_name->setText(n);
    ui->var_firstname->setText(fn);
    ui->var_bdate->setText(bd);
    ui->var_address->setText(a);
    ui->var_phone->setText(pn);
    ui->var_mail->setText(m);
    ui->var_type->setText(ct);
}
