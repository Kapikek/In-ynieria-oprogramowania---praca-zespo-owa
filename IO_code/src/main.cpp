#include <iostream>
#include "Base.h"
#include "Klient.h"
int Konto::ID_cnt = 0;
int main()
{
    Klient JAN_N;
    JAN_N.stworzKonto();
    JAN_N.wyswietlDane();

    return 0;
}
