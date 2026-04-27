//
// Created by MacBook_Air_Maks on 28.04.2026.
//

#include "Visa.h"

Visa::Visa() {
    Country_name = "Невідомо";
    Visa_opening_date = "Невідома";
    Visa_closing_date = "Невідома";
}

Visa::Visa(string country, string opening_date, string closing_date) {
    this->Country_name = country;
    this->Visa_opening_date = opening_date;
    this->Visa_closing_date = closing_date;
}

void Visa::showVisa() const {
    cout << "-----------------------------------------------------\n";
    cout << "                   V I S A                 \n";
    cout << "-----------------------------------------------------\n";
    cout << "Назва країни        : " << Country_name << endl;
    cout << "Дата відкриття візи : " << Visa_opening_date << endl;
    cout << "Дата закриття візи  : " << Visa_closing_date << endl;
    cout << "-----------------------------------------------------\n";
}
