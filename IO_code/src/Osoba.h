#pragma once
#include "Base.h"
class Osoba {

private:
    std::string imie;
    std::string nazwisko;
    std::string adres;
    std::string email;
    std::string numerTelefonu;

public:
    void wyswietlHarmonogram();
};