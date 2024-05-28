#ifndef KONTO_H
#define KONTO_H
#include "Base.h"
class Konto {

private:
    std::string imie;
    std::string nazwisko;
    std::string adres;
    std::string email;
    std::string numerTelefonu;
    std::string nazwaKonta;
    std::string haslo;
    std::string status;

public:
    void wyswietlHarmonogram();
};

#endif
