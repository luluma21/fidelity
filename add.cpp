#include "add.h"
#include "ui_add.h"
#include <QDebug>
#include <QMessageBox>
#include "datacust.h"
#include <Qfile>
#include <QTextEdit>

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
            QString texte;
            QFile file("Qt.txt");

            if(file.open(QIODevice::ReadOnly | QIODevice::Text))
            {
                 texte = file.readAll();
                 //fichier.close();
            }
            else texte = "Impossible d'ouvrir le fichier !";
            file.close();

            //QFile file("Qt.txt");
            // On ouvre notre fichier en lecture seule et on vérifie l'ouverture
            if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
                return;

            // Création d'un objet QTextStream à partir de notre objet QFile
            QTextStream flux(&file);
            flux << texte << rname << "!" << rfirstname << "!" << rbdate << "!" << raddress << "!" << rphone << "!" << rmail << "!" << rstatus << "!" << 0 << "?" << endl ;
            close();
        }
        else if (reponse == QMessageBox::No)
        {

        }



    close();



}

