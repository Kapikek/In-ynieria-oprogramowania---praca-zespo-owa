#ifndef PRACOWNIK_H
#define PRACOWNIK_H

namespace diagram_System_IO {
	class Pracownik : diagram_System_IO::Osoba {

	private:
		Date dataZatrudnienia;
		String wyksztalcenie;
		String numerKonta;
		float wyplata;
		float premia;
	};
}

#endif