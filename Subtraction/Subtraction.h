//
// Created by VarMoon on 13.09.2020.
//

#ifndef CALCULATORREINFORED_SUBSTRACTIONOPERATION_H
#define CALCULATORREINFORED_SUBSTRACTIONOPERATION_H


#include <Number.h>

class Subtraction {
    Number minuend;
    Number subtrahend;
    Number difference;
    unsigned digitFromMinuend;
    unsigned digitFromSubtrahend;
    long index;


    void caseWhereMinuendSmallerThanSubtrahend(size_t i);
    void gettingTensFromHigherDigits();

public:
    Subtraction (Number &minuend, Number &subtrahend);
    Number subtractionInt();
};



#endif //CALCULATORREINFORED_SUBSTRACTIONOPERATION_H
