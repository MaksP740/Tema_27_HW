#ifndef TEMA_27_HW_PASSPORT_H
#define TEMA_27_HW_PASSPORT_H

using namespace std;
#include <string>
#include <iostream>


class Passport {

protected:
    string seria; // Серія паспорта
    int number; // Номер паспорта
    string lastname; // Прізвище
    string firstname; // Імя
    string dateBirth; // Дата народження
    string placeBirth; // Місце народження
    string passportIssue; // Дата видачі паспорта
    string whoIssue; // Ким виданий

private:
    string middlename; // По баткові
    string Registration; // Прописка

public:
    Passport();

    Passport(string seria, int number, string lastname,
             string firstname, string middlename, string DateBirth, string PlaceBirth,
             string Passport_issue_date, string Who_issued_it, string Registration);

    string getSeria()const;
    int getNumber()const;
    string getLastname()const;
    string getFirstname()const;
    string getmiddlename() const;
    string getDateBirth()const;
    string getPlaceBirth()const;
    string getPassportIssue()const;
    string getWhoIssue()const;
    string getRegistration()const;

    void showPassport() const;

};


#endif //TEMA_27_HW_PASSPORT_H
