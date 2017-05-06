//
// Created by edems on 2017.05.06..
//

#ifndef BAJUSZ_UGYFEL_H
#define BAJUSZ_UGYFEL_H

#include "Ember.h"
#include <string>

class Ugyfel : public Ember {
    int percek;
    int sms;

    int osszeg;

public:
    Ugyfel(std::string nev, std::string cim, std::string telefon);

    void beolvas(std::istream & is);

    int getPercek();
    int getSms();
    int getOsszeg();
};


#endif //BAJUSZ_UGYFEL_H
