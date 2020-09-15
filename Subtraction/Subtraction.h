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
    int placeOfCommaInResult;
    long index;


    void caseWhereMinuendSmallerThanSubtrahend(size_t i);
    void gettingTensFromHigherDigits();
    bool placeOfCommaInResultTakenFromMinuend();
    void addZerosToMinuend();
    void addZerosToSubtrahend();

public:
    Subtraction (Number &minuend, Number &subtrahend);
    Number subtractionInt();
    Number subtractionFloat();
    Number preSubtract();
};

#endif //CALCULATORREINFORED_SUBSTRACTIONOPERATION_H
