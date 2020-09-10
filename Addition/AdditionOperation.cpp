//
// Created by VarMoon on 10.09.2020.
//

#include "AdditionOperation.h"

Number AdditionOperation::additionOperation(Number &firstAddend, Number &secondAddend) {
    long sizeOfBiggerNumber = firstAddend.getBiggerNumber(secondAddend);
    string result;
    unsigned carry = 0;
    long n1_i = (long) n1.size() - 1;
    long n2_i = (long) n2.size() - 1;
    for (size_t i = 0; i < maks_rozmiar + 1; n1_i--, n2_i--, i++) {
        unsigned n1_n = n1.getDigitFromPosition(n1_i);
        unsigned n2_n = n2.getDigitFromPosition(n2_i);

        result.insert(0, to_string(((n1_n + n2_n + carry) % 10)));
        carry = (n1_n + n2_n + carry) / 10;
    }
    return Number(removeTrailingZeros(result));
}

