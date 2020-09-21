//
// Created by VarMoon on 13.09.2020.
//

#ifndef CALCULATORREINFORED_DIVISION_H
#define CALCULATORREINFORED_DIVISION_H


class Division {
    Number dividend;
    Number divisor;
    Number quotient;
    Number temporaryDividend;
    int temporaryResult = 0;
    int placeOfComma;
    int app = 2;
    bool flagTakenZero = false;
    bool flagDoneDivision = false;

    void simpleDivisionMechanism();
    void settingTemporaryDividendFromZeroToEmpty();
    void caseWhereDivisionHasNotBeenProcessed();
    void caseWhereDivisionHasBeenProcessed();
    bool checkForComma(Number &number);

public:
    Division(Number &dividend, Number &divisor);
    Number divisionInt();
    Number divisionFloat();
};


#endif //CALCULATORREINFORED_DIVISION_H
