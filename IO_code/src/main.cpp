#include <iostream>
#include "Base.h"
#include "Klient.h"
#include "Grupa.h"
#include "Trener.h"
#include "Kierownik.h"

unsigned int Konto::ID_cnt = 0;
std::vector<Klient*> Klient::klienci;
std::vector<Klient*> Grupa::lista_klientow;
std::vector<Wniosek*> Wniosek::wnioski;
int main()
{
    Klient JAN_N, TOM_K;
    Grupa grupa_1;
    Trener  MAR_A;

    JAN_N.stworzKonto("Jan", "Nowak", "ul. Mazowiecka 15", "Nowak.J@fakemail.com", "111 222 333", "Nowak2432523", "password");
    TOM_K.stworzKonto("Tom", "Kier", "2015 Flower Ave.", "thomas.k@fakermail.com", "22 33 44 777", "TK2122", "password");
    MAR_A.stworzKonto("Marcin", "Antoni", "ul. Bohaterów Warszawy 2", "marcin.mar@fakemail.com", "3333 22 11 00", "M_A", "password");
    Klient::wyswietlListeKlientow();
    JAN_N.dolaczDoGrupy(1, "05", "06", "2024");
//    MAR_A.wyswietlDane();
    MAR_A.dodajDoGrupy(TOM_K, grupa_1);
    grupa_1.wyswietlListeKlientow();


//    Wniosek w = JAN_N.getWniosek(); //-- this works
//    std::cout << w.data_zlozenia.read() << std::endl;

    return 0;
}
