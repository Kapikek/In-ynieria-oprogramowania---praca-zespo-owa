#pragma once
#include "Pracownik.h"

class Trener : private Pracownik {

public:
    int cenaTreninguIndywidualnego;

    void dodajDoGrupy();

    void zmienHarmonogramGrupy();

    void zmienHarmonogramTrenera();
};
