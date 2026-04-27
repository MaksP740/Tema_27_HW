//
// Created by MacBook_Air_Maks on 28.04.2026.
//

#ifndef TEMA_27_HW_VISA_H
#define TEMA_27_HW_VISA_H

#include <string>
#include <iostream>
using namespace std;

class Visa {

private:
    string Country_name; // Назва країни
    string Visa_opening_date; // Дата відкриття візи
    string Visa_closing_date; // Дата закриття візи

public:
    Visa();
    Visa(string country, string opening_date, string closing_date);

    void showVisa()const;
};


#endif //TEMA_27_HW_VISA_H
