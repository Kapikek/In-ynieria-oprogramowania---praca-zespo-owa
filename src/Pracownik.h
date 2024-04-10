#ifndef PRACOWNIK_H
#define PRACOWNIK_H

namespace diagram_System_IO {
	class Pracownik : diagram_System_IO::Osoba {

	private:
		Date HiringDate;
		String Education;
		String BillingNumber;
		float MonthlySalary;
		float Bonuses;
	};
}

#endif
