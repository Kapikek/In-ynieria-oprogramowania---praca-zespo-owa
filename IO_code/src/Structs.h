#pragma once
#include <iostream>
#include <ctime>

    struct Date
    {
        std::string day, month, year;

        Date()
        {

        }

        Date(std::string day, std::string month, std::string year)
        {
            this->day = day, this->month = month, this->year = year;
        }

        std::string read()
        {
            std::string ret = year + "-" + month + "-" + day;

            return ret;
        }
    };

    struct DateTime
    {
        std::string day, month, year, time;
        DateTime()
        {

        }

        DateTime(std::string day, std::string month, std::string year, std::string time)
        {
            this->day = day, this->month = month, this->year = year, this->time = time;
        }

        std::string read()
        {
            std::string ret = year + "-" + month + "-" + day + " " + time;

            return ret;
        }

    };

