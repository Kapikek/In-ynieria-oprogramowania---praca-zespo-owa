#pragma once
#include "Pracownik.h"
#include "Grupa.h"
#include "Konto.h"

class Grupa;
class Trener : public Pracownik {
private:
    Grupa* grupa;
public:
    int cenaTreninguIndywidualnego;

    void przypiszTrenera();

    void dodajDoGrupy(Klient& klient, Grupa& grupa);

    void zmienHarmonogramGrupy();

    void zmienHarmonogramTrenera();
};
