#include "Grupa.h"

std::vector<Klient*>* Grupa::accessList()
{
return &lista_klientow;
}

void Grupa::wyswietlListeKlientow()
{

    if (lista_klientow.empty())
        return;
    for (auto item : lista_klientow)
        item->wyswietlDane();
}
