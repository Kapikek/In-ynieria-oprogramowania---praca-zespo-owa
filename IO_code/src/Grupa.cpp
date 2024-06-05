#include "Grupa.h"

std::vector<Klient*>* Grupa::accessList()
{
    return &lista_klientow;
}

Trener** Grupa::accessTrainer()
{
    return &trener_prowadzacy;
}

void Grupa::readT()
{
    this->trener_prowadzacy->wyswietlDane();
}

void Grupa::wyswietlListeKlientow()
{
    if (lista_klientow.empty())
        return;
    for (auto item : lista_klientow)
        item->wyswietlDane();
}
