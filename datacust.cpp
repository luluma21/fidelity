#include "datacust.h"

#include <QString>

datacust::datacust(QString name_, QString surname_, QString birthdate_, QString address_, QString phone_, QString mail_, bool status_, float totalpurchase_){
    name = name_;
    surname = surname_;
    birthdate = birthdate_;
    address = address_;
    phonenumber = phone_;
    mail = mail_;
    totalpurchase = totalpurchase_;
    status = status_;
}

datacust::~datacust(){}
