#include "Konto.h"


void Konto::wyswietlHarmonogram() {
	// TODO - implement Konto::wyswietlHarmonogram
	throw "Not yet implemented";
}

void Konto::set_ID_cnt(unsigned int num)
{
    Konto::ID_cnt = num;
}

void Konto::stworzKonto(std::string imie, std::string nazwisko, std::string adres,
    std::string email, std::string numerTelefonu, std::string nazwaKonta, std::string haslo)
{
    this->ID_konta = ++Konto::ID_cnt;
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->adres = adres;
    this->email = email;
    this->numerTelefonu = numerTelefonu;
    this->nazwaKonta = nazwaKonta;
    this->haslo = haslo;
    this->acc_status = "active";
}

void Konto::wyswietlDane()
{
    std::cout << this->ID_konta
    << " - " << this->imie
    << " - " << this->nazwisko
    << " - " << this->adres
    << " - " << this->email
    << " - " << this->numerTelefonu
    << " - " << this->nazwaKonta
    << " - " << this->haslo
    << " - " << this->acc_status
    << std::endl;
}
