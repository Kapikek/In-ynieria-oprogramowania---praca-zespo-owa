#pragma once
namespace diagram_System_IO {
	class Grupa {

	private:
	    int ID;
	    std::vector<Klient*> lista_klientow;
	    Trener* trener_prowadzacy;
		std::string nazwa;
	};
}

