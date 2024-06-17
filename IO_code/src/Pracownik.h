#pragma once
#include "Base.h"
#include "Konto.h"
#include "Klient.h"

class Klient;

class Pracownik : public Konto {

private:
    Date dataZatrudnienia;
    std::string wyksztalcenie;
    std::string numerKonta;

public:
    void wyswietlListeKlientow();

    void dodajOgloszenie();

};
