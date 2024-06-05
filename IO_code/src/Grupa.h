#pragma once
#include "Base.h"
#include "Klient.h"
#include "Trener.h"

class Trener;

class Grupa {
private:
    int ID;
    std::vector<Klient*> lista_klientow;
    Trener* trener_prowadzacy;
    std::string nazwa;
public:
    std::vector<Klient*>* accessList();

    Trener** accessTrainer();

    void readT();

    void wyswietlListeKlientow();
};

