#pragma once
#include "Base.h"
#include "Klient.h"
#include "Trener.h"

class Trener;

class Grupa {
private:
    int ID;
    static std::vector<Klient*> lista_klientow;
    Trener* trener_prowadzacy;
    std::string nazwa;
public:
    static std::vector<Klient*>* accessList();

    void wyswietlListeKlientow();
};

