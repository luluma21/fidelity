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
