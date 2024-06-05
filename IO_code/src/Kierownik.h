#pragma once
#include "Base.h"
#include "Pracownik.h"

class Kierownik : public Pracownik {


public:

    void przypiszDoGrupy();

    void dodajPracownika();

    void usunPracownika();

    void zablokujKlienta();

    void wyswietlRaport();

    void zmienHarmonogramGrupy();
};
