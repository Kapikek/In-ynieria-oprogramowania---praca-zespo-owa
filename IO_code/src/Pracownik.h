#pragma once
#include "Base.h"
#include "Konto.h"

class Pracownik : Konto {

private:
    Date dataZatrudnienia;
    std::string wyksztalcenie;
    std::string numerKonta;

public:
    void wyswietlKlientow();

    void dodajOgloszenie();
};
