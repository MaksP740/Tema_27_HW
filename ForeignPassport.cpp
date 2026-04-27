//
// Created by MacBook_Air_Maks on 28.04.2026.
//

#include "ForeignPassport.h"
#include "Visa.h"

ForeignPassport::ForeignPassport() {
    seria = "Невідомо";
    number = 0;
    lastname = "Невідомо";
    firstname = "Невідомо";
    dateBirth = "Невідомо";
    placeBirth = "Невідомо";
    passportIssue = "Невідомо";
    whoIssue = "Невідомо";
}

ForeignPassport::ForeignPassport(string seria, int number, string lastname, string firstname, string DateBirth,
    string PlaceBirth, string Passport_issue_date, string Who_issued_it) {
    this->seria = seria;
    this->number = number;
    this->lastname = lastname;
    this->firstname = firstname;
    this->dateBirth = DateBirth;
    this->placeBirth = PlaceBirth;
    this->passportIssue = Passport_issue_date;
    this->whoIssue = Who_issued_it;
}

void ForeignPassport::addVisa(const Visa &visa) {
    VisaList.push_back(visa);
}

void ForeignPassport::showForeignPassport() const {

    cout << "\n=====================================================\n";
    cout << "      З А К О Р Д О Н Н И Й   П А С П О Р Т";
    cout << "\n=====================================================\n";

    cout << "Серія              : " << seria << endl;
    cout << "Номер              : " << number << endl;
    cout << "ПІБ                : "
         << lastname << " " << firstname << endl;

    cout << "Дата народження    : " << dateBirth << endl;
    cout << "Місце народження   : " << placeBirth << endl;

    cout << "-----------------------------------------------------\n";

    cout << "Дата видачі        : " << passportIssue << endl;
    cout << "Ким виданий        : " << whoIssue << endl;

    for (const Visa &visa : VisaList) {
        visa.showVisa();
    }
    cout << "\n=====================================================\n";

}
