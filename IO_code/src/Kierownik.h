#ifndef KIEROWNIK_H
#define KIEROWNIK_H
#include "Base.h"
#include "Pracownik.h"

class Kierownik : public Pracownik {


public:
    void dodajPracownika();

    void usunPracownika();

    void zablokujKlienta();

    void wyswietlRaport();

    void zmienHarmonogramGrupy();
};


#endif
