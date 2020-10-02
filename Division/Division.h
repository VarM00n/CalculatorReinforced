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
    int app = 4;
    bool flagDoneDivision = false;



    void simpleDivisionMechanism();
    void settingTemporaryDividendFromZeroToEmpty();
    void caseWhereDivisionHasNotBeenProcessed();
    void caseWhereDivisionHasBeenProcessed();
    void round();

public:
    Division(Number &dividend, Number &divisor);
    Number divisionInt();
    Number divisionFloat();
    Number divisionFinal();
};


#endif //CALCULATORREINFORED_DIVISION_H
