#include "Harmonogram.h"

void Harmonogram::dodajTermin(std::string day, std::string month, std::string year, std::string time)
{
    dataStart.push_back(DateTime(day, month, year, time));
}

void Harmonogram::wyswietlHarmonogram()
{
    for (auto item : dataStart)
        std::cout << item.read() << std::endl;
}

