#pragma once
#include "Base.h"
#include "Konto.h"

class Klient : public Konto {

private:
    float limitKredytowy;
    std::string status;
    std::string wniosek;
    static std::vector<Klient*> klienci;
public:

    static void wyswietlListeKlientow();

    void wyswietlDane() override;

    void stworzKonto(std::string imie, std::string nazwisko, std::string adres,
    std::string email, std::string numerTelefonu, std::string nazwaKonta, std::string haslo) override;

    void dolaczDoGrupy();

    void opuscGrupe();

    void treningIndywidualny();

    void zlozSkarge();

    void wyswietlRachunki();
};
