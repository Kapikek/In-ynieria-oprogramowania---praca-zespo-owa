#include "Klient.h"
void Klient::wyswietlDane()
{
    std::cout << this->ID_konta
    << " " << this->imie
    << " " << this->nazwisko
    << " " << this->adres
    << " " << this->email
    << " " << this->numerTelefonu
    << " " << this->nazwaKonta
    << " " << this->haslo
    << " " << this->acc_status
    <<std::endl;
}

void Klient::stworzKonto() {
    this->ID_konta = ++Konto::ID_cnt;
    this->imie = "Jan";
    this->nazwisko = "Nowak";
    this->adres = "ul. Mazowiecka 12";
    this->email = "jan.nowak@fakemail.pl";
    this->numerTelefonu = "111222333";
    this->nazwaKonta = "JN_ACC";
    this->haslo = "password";
    this->acc_status = "active";

}

void Klient::dolaczDoGrupy() {
	// TODO - implement Klient::dolaczDoGrupy
	throw "Not yet implemented";
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
