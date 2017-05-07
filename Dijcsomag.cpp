//
// Created by edems on 2017.05.06..
//

#include <iostream>
#include "Dijcsomag.h"

Dijcsomag::Dijcsomag(std::string nev, int perc, int sms) {
    this->nev = nev;
    this->perc = perc;
    this->sms = sms;
}

void Dijcsomag::beolvas(std::istream & is) {
    is >> nev;

    std::string buffer;

    is >> buffer;

    perc = std::stoi(buffer.c_str());

    is >> buffer;

    sms = std::stoi(buffer.c_str());
}

std::string &Dijcsomag::getNev() {
    return nev;
}

int Dijcsomag::getPerc() {
    return perc;
}

int Dijcsomag::getSms() {
    return sms;
}

void Dijcsomag::kiir(std::ostream &os) {
    os << nev << std::endl;
    os << perc << std::endl;
    os << sms << std::endl;
}
