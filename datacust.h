#ifndef datacust_H
#define datacust_H

#include <QString>

class datacust{
public :
    datacust(QString name_, QString surname_, QString birthdate_, QString address_, QString phone_, QString mail_,  bool status_, float totalpurchase_);
    ~datacust() ;
    QString name;
    QString surname;
    QString birthdate;
    QString address;
    QString phonenumber;
    QString mail;
    float totalpurchase;
    bool status;
};

#endif // datacust_H
