//
// Created by MacBook_Air_Maks on 28.04.2026.
//

#ifndef TEMA_27_HW_FOREIGNPASSPORT_H
#define TEMA_27_HW_FOREIGNPASSPORT_H
#include "Passport.h"
#include "Visa.h"
#include <vector>
using namespace std;
#include <string>
#include <iostream>

class ForeignPassport: public Passport {
private:
    vector<Visa> VisaList;
public:
    ForeignPassport();
    ForeignPassport(string seria, int number, string lastname,
             string firstname, string DateBirth, string PlaceBirth,
             string Passport_issue_date, string Who_issued_it);

    void addVisa(Visa & VisaList);

    void showVisaList() const;
};


#endif //TEMA_27_HW_FOREIGNPASSPORT_H
