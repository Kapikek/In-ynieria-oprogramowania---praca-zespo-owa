#pragma once
#include "Pracownik.h"
#include "Grupa.h"
#include "Klient.h"

class Trener : public Pracownik {
private:
    Grupa* grupa;
    std::vector<Klient*> klienci_indywidualni;
public:
    Trener() {};

    void wyswietlDane() override;

    int cenaTreninguIndywidualnego;

    void dodajDoGrupy(Klient& klient, Grupa& grupa);

    void usun_z_grupy(Klient& klient, Grupa& grupa);

    void treningIndywidualny(Klient& klient);

    void wyswietlListeNaTreningIndywidualny();

    void zmienHarmonogramGrupy();

    void zmienHarmonogramTrenera();

    friend class Kierownik;

};
