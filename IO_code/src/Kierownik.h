#ifndef KIEROWNIK_H
#define KIEROWNIK_H

namespace diagram_System_IO {
	class Kierownik : diagram_System_IO::Pracownik {


	public:
		void dodajPracownika();

		void usunPracownika();

		void zablokujKlienta();

		void wyswietlRaport();

		void zmienHarmonogramGrupy();
	};
}

#endif
