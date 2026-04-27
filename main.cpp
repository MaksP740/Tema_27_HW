#include <iostream>

#include "ForeignPassport.h"
#include "Passport.h"
#include "Visa.h"

int main() {

    Passport passport1(
    "AA", 123456, "Іваненко", "Іван", "Олександрович",
    "01.01.2000", "Київ",
    "01.01.2020",
    "Київський РВ ГУ МВС України",
    "м. Київ, вул. Хрещатик, 1"
    );

    passport1.showPassport();

    ForeignPassport passport2(
    "FP", 987654,
    "Ivanenko", "Ivan",
    "01.01.2000", "Kyiv",
    "01.01.2022",
    "State Migration Service of Ukraine"
);

    passport2.addVisa(Visa("Італія", "05.05.2024", "05.11.2026"));
    passport2.addVisa(Visa("Німечинна", "10.04.2024", "10.10.2026"));
    passport2.showForeignPassport();



    return 0;
}
