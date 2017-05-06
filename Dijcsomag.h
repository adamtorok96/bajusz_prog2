//
// Created by edems on 2017.05.06..
//

#ifndef BAJUSZ_DIJCSOMAG_H
#define BAJUSZ_DIJCSOMAG_H

#include <istream>
#include <string>

class Dijcsomag {
    std::string nev;

    int perc;
    int sms;

public:
    Dijcsomag() {}
    Dijcsomag(std::string nev, int perc, int sms);

    void beolvas(std::istream & is);

    std::string & getNev();
    int getPerc();
    int getSms();
};


#endif //BAJUSZ_DIJCSOMAG_H
