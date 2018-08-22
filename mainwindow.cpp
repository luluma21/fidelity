#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add.h"
#include "modify.h"
#include "clientslist.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_newclient_clicked()
{
    Add a_window;
    a_window.exec();
}

void MainWindow::on_registeredclient_clicked()
{
    searchedname=ui->clientname->text();
    //qDebug()<<searchedname;
    /* bout de code pour trouver le client dans la bdd*/

    Modify m_window;
    m_window.initializeParameters("hallart","christine","26/12","mes couilles","0605015178","christine.hallart@hotmail.fr","Premium");
    m_window.exec();

}

void MainWindow::on_clientslist_clicked()
{
    ClientsList cl;
    cl.exec();
}
