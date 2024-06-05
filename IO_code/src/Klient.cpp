#include "Klient.h"

void Klient::wyswietlDane()
{
    std::cout << "Klient: ";
    Konto::wyswietlDane();
}

void Klient::stworzKonto(std::string imie, std::string nazwisko, std::string adres,
    std::string email, std::string numerTelefonu, std::string nazwaKonta, std::string haslo)
{
    Konto::stworzKonto(imie, nazwisko, adres,
    email, numerTelefonu, nazwaKonta, haslo);
    klienci.push_back(this);
}

void Klient::wyswietlListeKlientow() {
    if (klienci.empty())
        return;
    for (auto item : klienci)
        item->wyswietlDane();
}

void Klient::dolaczDoGrupy(unsigned int ID_grupy, std::string d, std::string m, std::string y)
{
    wniosek = Wniosek(DODANIE_DO_GRUPY, this->ID_konta, ID_grupy, Date(d, m, y));
}

const Wniosek& Klient::getWniosek()
{
    if (wniosek.init)
        return wniosek;
}

void Klient::opuscGrupe() {
	// TODO - implement Klient::opuscGrupe
	throw "Not yet implemented";
}

void Klient::treningIndywidualny() {
	// TODO - implement Klient::treningIndywidualny
	throw "Not yet implemented";
}

void Klient::zlozSkarge() {
	// TODO - implement Klient::zlozSkarge
	throw "Not yet implemented";
}

void Klient::wyswietlRachunki() {
	// TODO - implement Klient::wyswietlRachunki
	throw "Not yet implemented";
}
