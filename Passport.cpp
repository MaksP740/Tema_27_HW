//
// Created by MacBook_Air_Maks on 27.04.2026.
//

#include "Passport.h"

Passport::Passport() {
    seria = "Невідомо";
    number = 0;
    lastname = "Невідомо";
    firstname = "Невідомо";
    middlename = "Невідомо";
    dateBirth = "Невідомо";
    placeBirth = "Невідомо";
    passportIssue = "Невідомо";
    whoIssue = "Невідомо";
    Registration = "Невідомо";

}

Passport::Passport(string seria, int number, string lastname,
             string firstname, string middlename, string DateBirth, string PlaceBirth,
             string Passport_issue_date, string Who_issued_it, string Registration) {
    this->seria = seria;
    this->number = number;
    this->lastname = lastname;
    this->firstname = firstname;
    this->middlename = middlename;
    this->dateBirth = DateBirth;
    this->placeBirth = PlaceBirth;
    this->passportIssue = Passport_issue_date;
    this->whoIssue = Who_issued_it;
    this->Registration = Registration;
}

string Passport::setRegistration() {
    return Registration;
}

string Passport::getmiddlename() const {
    return middlename;
}

string Passport::getSeria() const {
    return seria;
}

int Passport::getNumber() const {
    return number;
}

string Passport::getLastname() const {
    return lastname;
}

string Passport::getFirstname() const {
    return firstname;
}

string Passport::getDateBirth() const {
    return dateBirth;
}

string Passport::getPlaceBirth() const {
    return placeBirth;
}

string Passport::getPassportIssue() const {
    return passportIssue;
}

string Passport::getWhoIssue() const {
    return whoIssue;
}

void Passport::showPassport() const {
    cout << "\n=====================================================\n";
    cout << "            П А С П О Р Т  У К Р А Ї Н И          \n";
    cout << "=====================================================\n";

    cout << "Серія              : " << seria << "\n";
    cout << "Номер              : " << number << "\n";
    cout << "ПІБ                : "
         << lastname << " " << firstname << " " << middlename << "\n";

    cout << "Дата народження    : " << dateBirth << "\n";
    cout << "Місце народження   : " << placeBirth << "\n";

    cout << "-----------------------------------------------------\n";

    cout << "Дата видачі        : " << passportIssue << "\n";
    cout << "Ким виданий        : " << whoIssue << "\n";
    cout << "Прописка           : " << Registration << "\n";

    cout << "=====================================================\n";
}
