#include "add.h"
#include "ui_add.h"
#include "verify.h"
#include <QDebug>

Add::Add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);
}

Add::~Add()
{
    delete ui;
}

void Add::on_cancelButton_clicked()
{
    close();
}

void Add::on_okButton_clicked()
{
    rname=ui->name->toPlainText();
    rfirstname=ui->firstname->toPlainText();
    rbdate=ui->bdate->toPlainText();
    raddress=ui->address->toPlainText();
    rphone=ui->phone->toPlainText();
    rmail=ui->mail->toPlainText();
    rstatus=ui->premium->isChecked();

    qDebug()<<rname<<rfirstname<<rbdate<<raddress<<rphone<<rmail;
    /*Verify verif_window;
    verif_window.exec();
    if (verif_window.verif_token==true){
        close();

    } */
    close();

}
