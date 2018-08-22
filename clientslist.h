#ifndef CLIENTSLIST_H
#define CLIENTSLIST_H

#include <QDialog>

namespace Ui {
class ClientsList;
}

class ClientsList : public QDialog
{
    Q_OBJECT

public:
    explicit ClientsList(QWidget *parent = 0);
    ~ClientsList();

private:
    Ui::ClientsList *ui;
};

#endif // CLIENTSLIST_H
