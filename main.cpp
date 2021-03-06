#include <iostream>
#include <fstream>
#include "Dijcsomag.h"
#include "Ugyfel.h"

Dijcsomag * dijcsomagBeolvas(int & n);
Ugyfel * ugyfelBeolvas(int & n);

int main() {
    int n_csomagok, n_ugyfelek;

    Dijcsomag * csomagok = dijcsomagBeolvas(n_csomagok);
    Ugyfel * ugyfelek = ugyfelBeolvas(n_ugyfelek);

    std::ofstream os("csomagok2.txt");

    os << n_csomagok << std::endl;

    for(int i = 0; i < n_csomagok; i++) {
        csomagok[i].kiir(os);
    }

    os.close();

    os.open("ugyfelek2.txt");

    os << n_ugyfelek << std::endl;

    for(int i = 0; i < n_ugyfelek; i++) {
        ugyfelek[i].kiir(os);
    }

    os.close();

    return 0;
}

Dijcsomag * dijcsomagBeolvas(int & n) {
    std::string buffer;

    std::ifstream is("csomagok2.txt");

    is >> buffer;

    n = std::stoi(buffer.c_str());

    Dijcsomag * csomagok = new Dijcsomag[n];

    for(int i = 0; i < n; i++) {
        csomagok[i].beolvas(is);
    }

    is.close();

    return csomagok;
}

Ugyfel * ugyfelBeolvas(int & n) {
    std::string buffer ;

    std::ifstream is("ugyfelek2.txt");

    is >> buffer;
    is.get();

    n = std::stoi(buffer.c_str());

    Ugyfel * ugyfelek = new Ugyfel[n];

    for(int i = 0; i < n; i++) {
        ugyfelek[i].beolvas(is);
    }

    is.close();

    return ugyfelek;
}

/*
 * /
// Created by Daniel Vetesi on 01/05/17.
//


#ifndef NAGYHAZI_MODUL1_H
#define NAGYHAZI_MODUL1_H


#include <vector>


class Adatok {
    std::string nev;
    std::string cim;
    std::string tel_szam;
    double percek;
    double sms;

public:
    Adatok() {};
    virtual ~Adatok() {};


};

class Dijcsomag{
    std::string nev;
    double ingyen_perc;
    double ingyen_sms;

public:
    Dijcsomag() {};
    virtual ~Dijcsomag() {};




};

class Ugyfel: public Adatok, public Dijcsomag{

    int osszeg;

public:
    Ugyfel() {};
    ~Ugyfel() {};
    void beolvas(std::istream& i) {};
    int szamol() {return 1;};




};

class Ugyfelek{
    std::vector<Ugyfel*>

public:
    Ugyfelek() {};

};
 */