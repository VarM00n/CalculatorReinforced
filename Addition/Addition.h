//
// Created by VarMoon on 10.09.2020.
//

#ifndef CALCULATORREINFORED_ADDITIONOPERATION_H
#define CALCULATORREINFORED_ADDITIONOPERATION_H

#include "../Number/Number.h"

class Addition {
    Number firstAddend;
    Number secondAddend;
    unsigned digitFromFirstAddend;
    unsigned digitFromSecondAddend;
public:
    Addition (Number &firstAddend, Number &secondAddend);
    Number additionInt();
};


#endif //CALCULATORREINFORED_ADDITIONOPERATION_H
