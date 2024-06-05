#include <iostream>
#include "Base.h"
#include "Klient.h"
unsigned int Konto::ID_cnt = 0;
std::vector<Klient*> Klient::klienci;
int main()
{
    Klient JAN_N, TOM_K;
    JAN_N.stworzKonto("Jan", "Nowak", "ul. Mazowiecka 15", "Nowak.J@fakemail.com", "111 222 333", "Nowak2432523", "password");
    TOM_K.stworzKonto("Tom", "Kier", "2015 Flower Ave.", "thomas.k@fakermail.com", "22 33 44 777", "TK2122", "password");

    Klient::wyswietlListeKlientow();
    JAN_N.dolaczDoGrupy(1, "05", "06", "2024");

//    Wniosek w = JAN_N.getWniosek(); //-- this works
//    std::cout << w.data_zlozenia.read() << std::endl;

    return 0;
}
