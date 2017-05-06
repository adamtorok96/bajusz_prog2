//
// Created by edems on 2017.05.06..
//

#include "Ember.h"

Ember::Ember(std::string nev, std::string cim, std::string telefon) {
    this->nev = nev;
    this->cim = cim;
    this->telefon = telefon;
}

std::string &Ember::getNev() {
    return nev;
}

std::string &Ember::getCim() {
    return cim;
}

std::string &Ember::getTelefon() {
    return telefon;
}