#pragma once
#include "Pracownik.h"
#include "Grupa.h"
#include "Konto.h"
#include "Klient.h"

class Grupa;

class Trener : public Pracownik {
private:
    Grupa* grupa;
    std::vector<Klient*> klienci_indywidualni;
public:
    void wyswietlDane() override;

    int cenaTreninguIndywidualnego;

    void dodajDoGrupy(Klient& klient, Grupa& grupa);

    void treningIndywidualny(Klient& klient);

    void zmienHarmonogramGrupy();

    void zmienHarmonogramTrenera();

    friend class Kierownik;

};
