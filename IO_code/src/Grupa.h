#pragma once
#include "Base.h"
#include "Klient.h"
#include "Trener.h"

class Trener;

class Grupa {
private:
    unsigned int ID;
    std::vector<Klient*> lista_klientow;
    Trener* trener_prowadzacy;
    std::string nazwa;
public:
    Grupa();

    Grupa(unsigned int ID, std::string nazwa);

    std::vector<Klient*>* accessList();

    Trener** accessTrainer();

    void readT();

    void wyswietlListeKlientow();

    unsigned int wyswietlID();
};

