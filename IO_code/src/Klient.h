#pragma once
#include "Base.h"
#include "Konto.h"

class Klient : private Konto {

private:
    float limitKredytowy;
    std::string status;
    std::string wniosek;
public:

    void wyswietlDane();

    void stworzKonto();

    void dolaczDoGrupy();

    void opuscGrupe();

    void treningIndywidualny();

    void zlozSkarge();

    void wyswietlRachunki();
};
