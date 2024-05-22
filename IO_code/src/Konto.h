#ifndef KONTO_H
#define KONTO_H

namespace diagram_System_IO {
	class Konto {

	private:
		String imie;
		String nazwisko;
		String adres;
		String email;
		String numerTelefonu;
		String nazwaKonta;
		String haslo;
		String status;

	public:
		void wyswietlHarmonogram();
	};
}

#endif
