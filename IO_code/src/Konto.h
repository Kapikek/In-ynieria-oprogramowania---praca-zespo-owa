#pragma once
#include "Base.h"
class Konto {
private:
    static unsigned int ID_cnt;
    int ID_konta;
    std::string imie;
    std::string nazwisko;
    std::string adres;
    std::string email;
    std::string numerTelefonu;
    std::string nazwaKonta;
    std::string haslo;
    std::string acc_status;

public:
    static void set_ID_cnt(unsigned int num);
    virtual void wyswietlDane();
    virtual void stworzKonto(std::string imie, std::string nazwisko, std::string adres,
    std::string email, std::string numerTelefonu, std::string nazwaKonta, std::string haslo);
    void wyswietlHarmonogram();
friend class Klient;
};
