#ifndef GRACZ_H
#define GRACZ_H

#include <string>

class Gracz {
public:
    Gracz(std::string imie);

    std::string imie;
    int kasa = 0;
    int portfel = 0; //kasa z wygranych rund

    Gracz operator+(const Gracz& drugi_gracz) const {
        Gracz wynik(imie + " i " + drugi_gracz.imie);
        wynik.kasa = kasa + drugi_gracz.kasa;
        wynik.portfel = portfel + drugi_gracz.portfel;
        return wynik;
    }
};

#endif
