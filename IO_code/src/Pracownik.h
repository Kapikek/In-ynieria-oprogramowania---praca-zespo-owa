#ifndef PRACOWNIK_H
#define PRACOWNIK_H

namespace diagram_System_IO {
	class Pracownik : diagram_System_IO::Konto {

	private:
		Date dataZatrudnienia;
		String wyksztalcenie;
		String numerKonta;

	public:
		void wyswietlKlientow();

		void dodajOgloszenie();
	};
}

#endif
