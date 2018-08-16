#ifndef MODIFY_H
#define MODIFY_H

#include <QDialog>

namespace Ui {
class Modify;
}

class Modify : public QDialog
{
    Q_OBJECT

public:
    explicit Modify(QWidget *parent = 0);
    ~Modify();
    void initializeParameters(QString n, QString fn, QString bd, QString a, QString pn, QString m, QString ct);


private slots:
    void on_end_button_clicked();

    void on_add_button_clicked();

private:
    Ui::Modify *ui;

};

#endif // MODIFY_H
