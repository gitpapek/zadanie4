#ifndef KOLO_H
#define KOLO_H

class Kolo {
public:
    Kolo(int wartosc);

    int wartosc;

    Kolo operator+(const Kolo& drugie_kolo) {
        return Kolo(wartosc + drugie_kolo.wartosc);
    }
};


#endif