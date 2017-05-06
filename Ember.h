//
// Created by edems on 2017.05.06..
//

#ifndef BAJUSZ_EMBER_H
#define BAJUSZ_EMBER_H

#include <string>

class Ember {
protected:
    std::string nev;
    std::string cim;
    std::string telefon;

public:
    Ember(std::string nev, std::string cim, std::string telefon);

    std::string & getNev();
    std::string & getCim();
    std::string & getTelefon();
};


#endif //BAJUSZ_EMBER_H
