//
// Created by VarMoon on 10.09.2020.
//

#ifndef CALCULATORREINFORED_NUMBER_H
#define CALCULATORREINFORED_NUMBER_H
#include <string>
#include "NumberValidation.h"
#include "NumberCore.h"

using namespace std;

class Number : public NumberValidation {
public:
    Number();

    //Constructors
    explicit Number(int value);
    explicit Number(string value);

    //Public Methods
    void sanitizeValue();
    unsigned getBiggerNumberSize(Number secondAddend);
    unsigned getDigitFromPosition(long position);
    void setDigitInPosition(long position, char digit);
    string addComaAndSign(int place_of_comma);
    void multiplyByTen();

    //Operators Overload
    bool isValueBigger(Number val1);
    bool operator> (const Number& r);
    bool operator== (const Number& r);
    bool operator!= (const Number& r);
};


#endif //CALCULATORREINFORED_NUMBER_H
