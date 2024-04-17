#ifndef KLIENT_H
#define KLIENT_H

namespace diagram_System_IO {
	class Klient : diagram_System_IO::Osoba {

	public:
		float limitKredytowy;

		void stworzKonto();

		void dolaczDoGrupy();

		void opuscGrupe();

		void treningIndywidualny();

		void zlozSkarge();

		void wyswietlRachunki();
	};
}

#endif
