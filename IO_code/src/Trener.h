#ifndef TRENER_H
#define TRENER_H

namespace diagram_System_IO {
	class Trener : diagram_System_IO::Pracownik {

	public:
		int cenaTreninguIndywidualnego;

		void dodajDoGrupy();

		void zmienHarmonogramGrupy();

		void zmienHarmonogramTrenera();
	};
}

#endif
