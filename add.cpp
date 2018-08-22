#include "add.h"
#include "ui_add.h"
#include "verify.h"
#include <QDebug>
#include <QMessageBox>

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
    int reponse = QMessageBox::question(this, "Verification", "Are you sure the informations are correct?", QMessageBox::Yes | QMessageBox::No);

        if (reponse == QMessageBox::Yes)
        {
            rname=ui->name->toPlainText();
            rfirstname=ui->firstname->toPlainText();
            rbdate=ui->bdate->toPlainText();
            raddress=ui->address->toPlainText();
            rphone=ui->phone->toPlainText();
            rmail=ui->mail->toPlainText();
            rstatus=ui->premium->isChecked();

            qDebug()<<rname<<rfirstname<<rbdate<<raddress<<rphone<<rmail;
            close();
        }
        else if (reponse == QMessageBox::No)
        {

        }


    /*Verify verif_window;
    verif_window.exec();
    if (verif_window.verif_token==true){
        close();

    } */
    //close();

}
