//
// Created by VarMoon on 13.09.2020.
//

#include <iostream>
#include "Subtraction.h"
#include "Number.h"


Subtraction::Subtraction(Number &minuend, Number &subtrahend): minuend(0), subtrahend(0), difference("") {
    this->minuend = minuend;
    this->subtrahend = subtrahend;
}

Number Subtraction::subtractionInt() {
    long counterForMinuend = minuend.size() - 1;
    long counterForSubtrahend = subtrahend.size() - 1;
    for (size_t i = 0; i < minuend.size() + 1; counterForMinuend--, counterForSubtrahend--, i++) {
        digitFromMinuend = minuend.getDigitFromPosition(counterForMinuend);
        digitFromSubtrahend = subtrahend.getDigitFromPosition(counterForSubtrahend);
        caseWhereMinuendSmallerThanSubtrahend(i);
        difference.setValue(to_string((char) (digitFromMinuend - digitFromSubtrahend)) + difference.getValue());
//        difference.insert(0, to_string((char) (digitFromMinuend - digitFromSubtrahend)));
    }
    difference.removeTrailingZeros();
//    cout << Number::removeTrailingZeros(difference);
//    return Number(Number::removeTrailingZeros(difference));
    return difference;
}

void Subtraction::caseWhereMinuendSmallerThanSubtrahend(size_t i) {
    if (digitFromMinuend < digitFromSubtrahend) {
        digitFromMinuend += 10;
        index = minuend.size() - i - 2;
        gettingTensFromHigherDigits();
        minuend.setNumberInPosition(index, minuend.getDigitFromPosition(index) - 1);
    }
}

void Subtraction::gettingTensFromHigherDigits(){
    while (minuend.getDigitFromPosition(index) == 0) {
        minuend.setNumberInPosition(index, '9');
        index--;
    }
}

