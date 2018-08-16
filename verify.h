#ifndef VERIFY_H
#define VERIFY_H

#include <QDialog>

namespace Ui {
class Verify;
}

class Verify : public QDialog
{
    Q_OBJECT

public:
    explicit Verify(QWidget *parent = 0);
    ~Verify();
    bool verif_token;


private slots:
    void on_cancel_button_clicked();

    void on_val_button_clicked();

private:
    Ui::Verify *ui;


};

#endif // VERIFY_H
