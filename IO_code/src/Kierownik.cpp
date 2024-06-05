#include "Kierownik.h"

void Kierownik::przypiszDoGrupy(Trener& trener, Grupa& grupa)
{
    Trener** trn = grupa.accessTrainer();
    *trn = &trener;
}


void Kierownik::dodajPracownika(Trener& trener, std::string imie, std::string nazwisko, std::string adres,
    std::string email, std::string numerTelefonu, std::string nazwaKonta, std::string haslo) {
    trener.stworzKonto(imie, nazwisko, adres,
    email, numerTelefonu, nazwaKonta, haslo);
}

void Kierownik::usunPracownika() {
	// TODO - implement Kierownik::usunPracownika
	throw "Not yet implemented";
}

void Kierownik::zablokujKlienta() {
	// TODO - implement Kierownik::zablokujKlienta
	throw "Not yet implemented";
}

void Kierownik::wyswietlRaport() {
	// TODO - implement Kierownik::wyswietlRaport
	throw "Not yet implemented";
}

void Kierownik::zmienHarmonogramGrupy() {
	// TODO - implement Kierownik::zmienHarmonogramGrupy
	throw "Not yet implemented";
}
