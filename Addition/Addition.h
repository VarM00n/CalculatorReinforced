//
// Created by VarMoon on 10.09.2020.
//

#ifndef CALCULATORREINFORED_ADDITIONOPERATION_H
#define CALCULATORREINFORED_ADDITIONOPERATION_H

#include "../Number/Number.h"

class Addition {
    Number firstAddend;
    Number secondAddend;
    Number sum = Number("");
    unsigned digitFromFirstAddend;
    unsigned digitFromSecondAddend;
    int placeOfCommaInResult;


    bool placeOfCommaInResultTakenFromSecondAddend();
    void addingZerosToFirstAddend();
    void addingZerosToSecondAddend();


public:
    Number additionFinal();
    Number additionFloat();
    Number additionInt();
    Addition (Number &firstAddend, Number &secondAddend);
};


#endif //CALCULATORREINFORED_ADDITIONOPERATION_H
