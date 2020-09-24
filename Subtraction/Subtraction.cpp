//
// Created by VarMoon on 13.09.2020.
//

#include <iostream>
#include "../Addition/Addition.h"
#include "../Subtraction/Subtraction.h"
#include "../Number/Number.h"


Subtraction::Subtraction(Number &minuend, Number &subtrahend): minuend(0), subtrahend(0), difference("") {
    this->minuend = minuend;
    this->subtrahend = subtrahend;
    this->placeOfCommaInResult = this->subtrahend.getFloatingPos();
}

Number Subtraction::preSubtract() {
    if(minuend == subtrahend)
        return Number("0");

    // a - (-b) = a + b
    if (minuend.isPositive() && subtrahend.isNegative()) {
        subtrahend.setSign(false);
        Addition addition(minuend, subtrahend);
        return addition.additionFinal();
    }

    // (-a) - b = -(a+b)
    if (minuend.isNegative() && subtrahend.isPositive()) {
        minuend.setSign(false);
        Addition addition(minuend, subtrahend);
        Number result = addition.additionFinal();
        result.setSign(true);
        result.removeTrailingZeros();
        return result;
    }

    // (-a) - (-b) = b - a
    if (minuend.isNegative() && subtrahend.isNegative()) {
        minuend.setSign(false);
        subtrahend.setSign(false);

        if(subtrahend > minuend)
            return Subtraction(subtrahend, minuend).subtractionFloat();
        else {
            Number result = Subtraction(minuend, subtrahend).subtractionFloat();
            result.setSign(true);
            return result;
        }
    }

    // a - b
    if(minuend > subtrahend)
        return Subtraction(minuend, subtrahend).subtractionFloat();
    else {
        Number result = Subtraction(subtrahend, minuend).subtractionFloat();
        result.setSign(true);
        result.removeTrailingZeros();
        return result;
    }
}

Number Subtraction::subtractionFloat(){
    if(placeOfCommaInResultTakenFromMinuend()){
        //example first number x.xx, second number y.yyy  (x, y -> Natural number)
        addZerosToMinuend();
    }
    else{
        //example first number x.xxx, second number y.yy  (x, y -> Natural number)
        addZerosToSubtrahend();
    }
    Subtraction subtraction(minuend, subtrahend);
    Number result(subtraction.subtractionInt());
    result.setValue(result.addComaAndSign(static_cast<int>(result.size() - placeOfCommaInResult)));
    result.removeTrailingZeros();
    return result;
}

bool Subtraction::placeOfCommaInResultTakenFromMinuend(){
    if (placeOfCommaInResult < minuend.getFloatingPos()){
        placeOfCommaInResult = minuend.getFloatingPos();
        return false;
    }
    return true;
}

void Subtraction::addZerosToMinuend(){
    for (int i = 0; i < subtrahend.getFloatingPos() - minuend.getFloatingPos(); i++)
        for (int j = 0; j < subtrahend.getFloatingPos() - minuend.getFloatingPos(); j++)
            minuend.setValue(minuend.getValue() + "0");
}

void Subtraction::addZerosToSubtrahend() {
    for(int i = 0 ; i < minuend.getFloatingPos() - subtrahend.getFloatingPos(); i++)
        subtrahend.setValue(subtrahend.getValue() + "0");
}

Number Subtraction::subtractionInt() {
    long counterForMinuend = minuend.size() - 1;
    long counterForSubtrahend = subtrahend.size() - 1;
    difference.setValue("");
    for (size_t i = 0; i < minuend.size() + 1; counterForMinuend--, counterForSubtrahend--, i++) {
        digitFromMinuend = minuend.getDigitFromPosition(counterForMinuend);
        digitFromSubtrahend = subtrahend.getDigitFromPosition(counterForSubtrahend);
        caseWhereMinuendSmallerThanSubtrahend(i);
        difference.setValue(to_string((char) (digitFromMinuend - digitFromSubtrahend)) + difference.getValue());
    }
    difference.removeTrailingZeros();

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
        minuend.setDigitInPosition(index, '9');
        index--;
    }
}