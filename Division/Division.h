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

    void whileDivisorBiggerThanTemporaryDivident();
    void simpleDivisionMechanism();
    void settingTemporaryDividendFromZeroToEmpty();
    void caseWhereTemporaryDividendEqZero();

public:
    Division(Number &dividend, Number &divisor);
    Number divisionInt();
};


#endif //CALCULATORREINFORED_DIVISION_H
