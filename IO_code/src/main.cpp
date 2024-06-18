#include <iostream>
#include "Base.h"
#include "Klient.h"
#include "Grupa.h"
#include "Trener.h"
#include "Kierownik.h"

unsigned int Konto::ID_cnt = 0;
std::vector<Klient*> Klient::klienci;
std::vector<Wniosek*> Wniosek::wnioski;

int main()
{
    int i = 0;
    Kierownik K_KAMIL;
    Trener  T_MAR_A;
    Grupa grupa_1(1, "Grupa_A"), grupa_2(2, "Grupa_B");
    Klient C_JAN_N, C_TOM_K, C_KAM_K;
    // init konta
    K_KAMIL.stworzKonto("Kamil", "Kamil", "ul. Kierownicza 1", "Kamil@fakemail.com", "999 999 999", "KML", "****");
    C_JAN_N.stworzKonto("Jan", "Nowak", "ul. Mazowiecka 15", "Nowak.J@fakemail.com", "111 222 333", "Nowak2432523", "*********");
    C_TOM_K.stworzKonto("Tom", "Kier", "2015 Flower Ave.", "thomas.k@fakermail.com", "22 33 44 777", "TK2122", "********");
    C_KAM_K.stworzKonto("Kamil", "Bier", "ul. Zolnierska 111", "kamil.k@fakermail.com", "111 222 333", "KK2122", "********");
    K_KAMIL.dodajPracownika(T_MAR_A, "Marcin", "Antoni", "ul. Bohater�w Warszawy 2", "marcin.mar@fakemail.com", "3333 22 11 00", "M_A", "*********");
    // init grupy
    C_JAN_N.dolaczDoGrupy(1, "05", "06", "2024");
    C_KAM_K.dolaczDoGrupy(1, "04", "06", "2024");
    C_KAM_K.treningIndywidualny(T_MAR_A.getID(), "11", "06", "2024");
    K_KAMIL.przypiszDoGrupy(T_MAR_A, grupa_1);
    T_MAR_A.dodajDoGrupy(C_JAN_N, grupa_1);
    T_MAR_A.dodajDoGrupy(C_KAM_K, grupa_1);
    std::cout << "wszyscy dodani klienci" << std::endl;
    Klient::wyswietlListeKlientow();
    std::cout << "usuwanie z grupy Jana" << std::endl;
    std::cout << "grupa do" << std::endl;
    grupa_1.wyswietlListeKlientow();
    T_MAR_A.usun_z_grupy(C_JAN_N,grupa_1);
    std::cout << "grupa po" << std::endl;
    grupa_1.wyswietlListeKlientow();
    std::cout << "trening indywidualny" << std::endl;
    T_MAR_A.treningIndywidualny(C_KAM_K);
    T_MAR_A.wyswietlListeNaTreningIndywidualny();

    std::cout << "zmiana harmonogramu trenera" << std::endl;
    T_MAR_A.zmienHarmonogramTrenera("01", "02", "2024", "2h");
    T_MAR_A.zmienHarmonogramTrenera("03", "02", "2024", "2h");
    T_MAR_A.wyswietlHarmonogram();

    std::cout << "zmiana harmonogramu grupy" << std::endl;
    T_MAR_A.zmienHarmonogramGrupy(grupa_1 ,"11", "02", "2024", "2h");
    grupa_1.wyswietlHarmonogram();

    std::cout << "dane trenera z grupy (dwa odczyty)" << std::endl;
    grupa_1.readTrener();
    Trener** trn = grupa_1.accessTrainer();
    (*trn)->wyswietlDane();

    std::cout << "blokowanie klienta Jan" << std::endl;
    K_KAMIL.zablokujKlienta(C_JAN_N);
    std::cout << "Jan: " << C_JAN_N.wypiszStatus() << " Tom: " << C_TOM_K.wypiszStatus() << std::endl;

    std::cout << "grupa wniosek data" << std::endl;
    C_JAN_N.dolaczDoGrupy(1, "18", "06", "2024");
    std::vector<Wniosek>* w = C_JAN_N.getWniosek(); //-- this works
    std::cout << w->back().data_zlozenia.read() << std::endl;

    std::cout << "ogloszenia" << std::endl;
    T_MAR_A.dodajOgloszenie(1, "Ogloszenie", "Tresc", Date("01", "01", "2024"));
    K_KAMIL.dodajOgloszenie(2, "Ogloszenie", "Tresc", Date("10", "01", "2024"));
    const auto& posts = Post::getPosts();
    if (!posts.empty()) {
        for (auto& post : posts) {
            post->wyswietlPost();
        }
    }

    return 0;
}
