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
    string result;
    unsigned carry = 0;
    for (size_t i = 0; i < sizeOfBiggerNumber + 1; counterForFirstAddend--,
            counterForSecondAddend--, i++) {
        unsigned n1_n = firstAddend.getDigitFromPosition(counterForFirstAddend);
        unsigned n2_n = secondAddend.getDigitFromPosition(counterForSecondAddend);
        result.insert(0, to_string(((n1_n + n2_n + carry) % 10)));
        carry = (n1_n + n2_n + carry) / 10;
    }
    cout << result;
    return Number(result);
}

