#include "Trener.h"

void Trener::dodajDoGrupy(Klient& klient, Grupa& grupa) {
    auto vec = Grupa::accessList();
    vec->push_back(&klient);
}

void Trener::zmienHarmonogramGrupy() {
	// TODO - implement Trener::zmienHarmonogramGrupy
	throw "Not yet implemented";
}

void Trener::zmienHarmonogramTrenera() {
	// TODO - implement Trener::zmienHarmonogramTrenera
	throw "Not yet implemented";
}
