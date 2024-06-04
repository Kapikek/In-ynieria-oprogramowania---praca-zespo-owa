#pragma once
#include "Base.h"
class Konto {
private:
    static int ID_cnt;
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
    static void set_ID_cnt(int num);
    void wyswietlHarmonogram();
friend class Klient;
};
