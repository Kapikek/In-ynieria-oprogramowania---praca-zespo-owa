#include "Trener.h"

void Trener::wyswietlDane()
{
    std::cout << "Trener: ";
    Konto::wyswietlDane();
}

void Trener::dodajDoGrupy(Klient& klient, Grupa& grupa) {
    auto vec = grupa.accessList();
    std::vector<Wniosek>* wnioski = klient.getWniosek();

    for (unsigned int i = 0; i < wnioski->size(); i++)
        if ((*wnioski)[i].typ == DODANIE_DO_GRUPY && (*wnioski)[i].grupa_ID == grupa.wyswietlID())
        {
            vec->push_back(&klient);
            (*wnioski).erase(wnioski->begin() + i);
            break;
        }
}

void Trener::treningIndywidualny(Klient& klient) {
    std::vector<Wniosek>* wnioski = klient.getWniosek();

    for (unsigned int i = 0; i < wnioski->size(); i++)
        if ((*wnioski)[i].typ == TRENING_INDYWIDUALNY && (*wnioski)[i].grupa_ID == ID_konta)
        {
            treningi_indywidualne->push_back(&klient);
            (*wnioski).erase(wnioski->begin() + i);
            break;
        }
}

void Trener::zmienHarmonogramGrupy() {
	// TODO - implement Trener::zmienHarmonogramGrupy
	throw "Not yet implemented";
}

void Trener::zmienHarmonogramTrenera() {
	// TODO - implement Trener::zmienHarmonogramTrenera
	throw "Not yet implemented";
}
