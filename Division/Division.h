//
// Created by VarMoon on 13.09.2020.
//

#ifndef CALCULATORREINFORED_DIVISION_H
#define CALCULATORREINFORED_DIVISION_H


class Division {
    Number dividend;
    Number divisor;
    Number quotient;

public:
    Division(Number &dividend, Number &divisor);
    Number divisionInt(Number &n1, Number &n2);
};


#endif //CALCULATORREINFORED_DIVISION_H
