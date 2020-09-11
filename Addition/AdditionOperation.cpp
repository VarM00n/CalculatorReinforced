//
// Created by VarMoon on 10.09.2020.
//

#include <iostream>
#include "AdditionOperation.h"

using namespace std;

Number AdditionOperation::additionOperation(Number &firstAddend, Number &secondAddend) {
    unsigned long sizeOfBiggerNumber = firstAddend.getBiggerNumber(secondAddend);
    long counterForFirstAddend = firstAddend.size() - 1;
    long counterForSecondAddend = secondAddend.size() - 1;
    string sum;
    unsigned carry = 0;
    for (size_t i = 0; i < sizeOfBiggerNumber + 1; counterForFirstAddend--,
            counterForSecondAddend--, i++) {
        unsigned digitFromFirstAddend = firstAddend.getDigitFromPosition(counterForFirstAddend),
            digitFromSecondAddend = secondAddend.getDigitFromPosition(counterForSecondAddend),
            numberToPutIntoSum = digitFromFirstAddend + digitFromSecondAddend + carry;
        carry = numberToPutIntoSum / 10;
        sum.insert(0, to_string((numberToPutIntoSum % 10)));
    }
    return Number(removeTrailingZeros(sum));
}

string AdditionOperation::removeTrailingZeros(string &number) {
    while(number[0] == '0'){
        number.erase(0, 1);
    }
    return number;
}