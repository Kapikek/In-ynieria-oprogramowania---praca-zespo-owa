#pragma once
#include "Base.h"
#include "Pracownik.h"
#include "Trener.h"
#include "Grupa.h"

class Trener;
class Grupa;

class Kierownik : public Pracownik {

public:

    void przypiszDoGrupy(Trener& trener, Grupa& grupa);

    void dodajPracownika(Trener& trener, std::string imie, std::string nazwisko, std::string adres,
    std::string email, std::string numerTelefonu, std::string nazwaKonta, std::string haslo);

    void usunPracownika();

    void zablokujKlienta();

    void wyswietlRaport();

    void zmienHarmonogramGrupy();
};
