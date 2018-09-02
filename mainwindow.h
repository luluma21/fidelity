#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "datacust.h"
#include "modify.h"
#include <QMainWindow>
#include <Qvector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString searchedname;


private:
    Ui::MainWindow *ui;

    std::vector<datacust *> list_customer ;
    Modify * stat;

private slots:
    void on_newclient_clicked();
    void on_registeredclient_clicked();
    void on_clientslist_clicked();
};

#endif // MAINWINDOW_H
