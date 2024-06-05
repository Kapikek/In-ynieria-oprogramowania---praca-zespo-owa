#pragma once
#include "Base.h"
#include "Konto.h"

enum typ_wniosku
{
    DODANIE_DO_GRUPY//coœ jeszcze?
};

struct Wniosek
{
    bool init = false;
    typ_wniosku typ;
    unsigned int klient_ID;
    unsigned int grupa_ID;
    Date data_zlozenia;

    Wniosek() {}

    Wniosek(typ_wniosku typ, unsigned int klient_ID, unsigned int grupa_ID, Date data_zlozenia)
    {
        this->typ = typ;
        this->klient_ID = klient_ID;
        this->grupa_ID = grupa_ID;
        this->data_zlozenia = data_zlozenia;
        init = true;
    }

};

class Klient : public Konto {
private:
    float limitKredytowy;
    std::string status;
    Wniosek wniosek;
    static std::vector<Klient*> klienci;
public:

    Klient() {}

    static void wyswietlListeKlientow();

    void wyswietlDane() override;

    void stworzKonto(std::string imie, std::string nazwisko, std::string adres,
    std::string email, std::string numerTelefonu, std::string nazwaKonta, std::string haslo) override;

    void dolaczDoGrupy(unsigned int ID_grupy, std::string d, std::string m, std::string y);

    const Wniosek& getWniosek();

    void opuscGrupe();

    void treningIndywidualny();

    void zlozSkarge();

    void wyswietlRachunki();
};



