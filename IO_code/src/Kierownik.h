#pragma once
#include "Base.h"
#include "Pracownik.h"
#include "Trener.h"

class Trener;

class Kierownik : public Pracownik {

public:

    void przypiszDoGrupy();

    void dodajPracownika(Trener& trener, std::string imie, std::string nazwisko, std::string adres,
    std::string email, std::string numerTelefonu, std::string nazwaKonta, std::string haslo);

    void usunPracownika();

    void zablokujKlienta();

    void wyswietlRaport();

    void zmienHarmonogramGrupy();
};
