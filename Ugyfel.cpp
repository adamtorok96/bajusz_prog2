//
// Created by edems on 2017.05.06..
//

#include <iostream>
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
    std::string buffer;

    getline(is, nev);
    getline(is, cim);
    getline(is, telefon);

    std::cout << nev << '\n';
    std::cout << cim << '\n';
    std::cout << telefon << '\n';

    is >> buffer;
    percek = std::stoi(buffer.c_str());

    is >> buffer;
    sms = std::stoi(buffer.c_str());

    is >> buffer;
    osszeg = std::stoi(buffer.c_str());
}
