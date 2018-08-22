#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add.h"
#include "modify.h"
#include "datacust.h"
#include <Qvector>
#include <Qfile>
#include <QTextEdit>
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
    list_customer.clear();

    QString texte;
    QFile file("Qt.txt");

    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
         texte = file.readAll();
    }
    else texte = "Impossible d'ouvrir le fichier !";
    file.close();

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    int i = 0;
    int j = 0;
    QString dat = "";

    QString name = "";
    QString surname = "";
    QString birthdate = "";
    QString address = "";
    QString phonenumber = "";
    QString mail = "";
    bool status = false;
    float totalpurchase = 0;
    for(int k=0;k<texte.size();k++){
            if (texte[k]=="!"){
                for (int a=i; a<k; a++){
                    dat = dat + texte[a];
                }
                if (j==0){
                    name =  dat;
                }
                if (j==1){
                    surname = dat;
                }
                if (j==2){
                    birthdate = dat;
                }
                if (j==3){
                    address = dat;
                }
                if (j==4){
                    phonenumber = dat;
                }
                if (j==5){
                    mail = dat;
                }
                if (j==6){
                    if (dat=="0"){
                        status = false;
                    }
                    else{
                        status = true;
                    }
                }
                if (j==7){
                    totalpurchase = dat.toFloat();
                }
                i = k+1;
                j = j + 1;
                dat = "";
            }
            if (texte[k]=="?"){
                j = 0;
                list_customer.push_back(new datacust(name, surname, birthdate, address, phonenumber, mail, status, totalpurchase));
                i = k + 2;
            }
    }

    int a = -1 ;
    for (int k=0;k<list_customer.size();k++){
        if (searchedname == list_customer[k]->name){
            a = k;
        }
    }


    Modify m_window;
    if (a==-1){
        m_window.initializeParameters("pas de résultat","","","","","","");
    }
    else{
        if (list_customer[a]->status==0){
            m_window.initializeParameters(list_customer[a]->name,list_customer[a]->surname,list_customer[a]->birthdate,list_customer[a]->address,list_customer[a]->phonenumber,list_customer[a]->mail,"standart");
        }
        else{
            m_window.initializeParameters(list_customer[a]->name,list_customer[a]->surname,list_customer[a]->birthdate,list_customer[a]->address,list_customer[a]->phonenumber,list_customer[a]->mail,"premium");
        }
    }

    QTextStream flux(&file);
    for (int k=0;k<list_customer.size();k++){
        flux << list_customer[k]->name << "!" << list_customer[k]->surname << "!" << list_customer[k]->birthdate << "!" << list_customer[k]->address << "!" << list_customer[k]->phonenumber << "!" << list_customer[k]->mail << "!" << list_customer[k]->status << "!" << list_customer[k]->totalpurchase << "?" << endl ;
    }
    qDebug() << list_customer.size();
    m_window.exec();

}

void MainWindow::on_clientslist_clicked()
{
    ClientsList cl;

    cl.exec();
}
