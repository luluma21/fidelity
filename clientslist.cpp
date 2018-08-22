#include "clientslist.h"
#include "ui_clientslist.h"

ClientsList::ClientsList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientsList)
{
    ui->setupUi(this);
}

ClientsList::~ClientsList()
{
    delete ui;
}


void ClientsList::init()
{
    ui->display->setText("");
}

void ClientsList::on_delete_2_clicked()
{
    QString name =ui->nametodelete->text();

}
