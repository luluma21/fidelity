#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private slots:
    void on_newclient_clicked();
    void on_registeredclient_clicked();
};

#endif // MAINWINDOW_H
