//
// Created by edems on 2017.05.06..
//

#include "Ugyfel.h"

Ugyfel::Ugyfel(std::string nev, std::string cim, std::string telefon) : Ember(nev, cim, telefon) {
    this->percek = 0;
    this->sms = 0;
    this->osszeg = 0;
}

int Ugyfel::getPercek() {
    return percek;
}

int Ugyfel::getSms() {
    return sms;
}

int Ugyfel::getOsszeg() {
    return osszeg;
}

void Ugyfel::beolvas(std::istream &is) {
    is >> nev;
    is >> cim;
    is >> telefon;

    std::string buffer;

    is >> buffer;

    percek = std::stoi(buffer.c_str());
    sms = std::stoi(buffer.c_str());
    osszeg = std::stoi(buffer.c_str());
}
