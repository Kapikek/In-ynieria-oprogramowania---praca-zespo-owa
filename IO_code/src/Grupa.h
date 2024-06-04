#pragma once
#include "Base.h"
#include "Klient.h"
#include "Trener.h"

class Grupa {
private:
    int ID;
    std::vector<Klient*> lista_klientow;
    Trener* trener_prowadzacy;
    std::string nazwa;
public:
    void listMembers();
};

