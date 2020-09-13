//
// Created by VarMoon on 10.09.2020.
//

#include <iostream>
#include "Addition.h"
#include "Number.h"

using namespace std;

Number Addition::additionInt() {
    unsigned long sizeOfBiggerNumber = firstAddend.getBiggerNumber(secondAddend);
    long counterForFirstAddend = firstAddend.size() - 1;
    long counterForSecondAddend = secondAddend.size() - 1;
//    string sum;
    unsigned carry = 0;
    for (size_t i = 0; i < sizeOfBiggerNumber + 1; counterForFirstAddend--,
            counterForSecondAddend--, i++) {
        digitFromFirstAddend = firstAddend.getDigitFromPosition(counterForFirstAddend);
        digitFromSecondAddend = secondAddend.getDigitFromPosition(counterForSecondAddend);
        unsigned numberToPutIntoSum = digitFromFirstAddend + digitFromSecondAddend + carry;
        carry = numberToPutIntoSum / 10;
        sum.setValue(to_string((numberToPutIntoSum % 10)) + sum.getValue());
    }
    sum.removeTrailingZeros();
    return sum;
}

Addition::Addition(Number &firstAddend, Number &secondAddend): firstAddend(0), secondAddend(0), sum(""){
    this->firstAddend = firstAddend;
    this->secondAddend = secondAddend;
}
