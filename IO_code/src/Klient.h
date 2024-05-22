#ifndef KLIENT_H
#define KLIENT_H

namespace diagram_System_IO {
	class Klient : diagram_System_IO::Konto {

	private:
		float limitKredytowy;
		String status;
		String wniosek;
	public:

		void stworzKonto();

		void dolaczDoGrupy();

		void opuscGrupe();

		void treningIndywidualny();

		void zlozSkarge();

		void wyswietlRachunki();
	};
}

#endif
