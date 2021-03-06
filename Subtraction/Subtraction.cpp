//
// Created by VarMoon on 13.09.2020.
//

#include <iostream>
#include "../Addition/Addition.h"
#include "../Subtraction/Subtraction.h"
#include "../Number/Number.h"
#include "../Number/NumberValidation.h"


Subtraction::Subtraction(Number &minuend, Number &subtrahend): minuend(0), subtrahend(0), difference("") {
    this->minuend = minuend;
    this->subtrahend = subtrahend;
    this->placeOfCommaInResult = this->subtrahend.getFloatingPos();
}

Number Subtraction::subtractionFinal() {
    if(minuend == subtrahend && minuend.getFloatingPos() == subtrahend.getFloatingPos())
        return Number("0");

    // a - (-b) = a + b
    if (minuend.isPositive() && subtrahend.isNegative()) {
        subtrahend.setSign(false);
        return additionForReturn(false);
    }

    // (-a) - b = -(a+b)
    if (minuend.isNegative() && subtrahend.isPositive()) {
        minuend.setSign(false);
        return additionForReturn(true);
    }

    // (-a) - (-b) = b - a
    if (minuend.isNegative() && subtrahend.isNegative()) {
        minuend.setSign(false);
        subtrahend.setSign(false);
        if(subtrahend > minuend) {
            return Subtraction(subtrahend, minuend).subtractionFinal();
        }
        else {
            return subtractionForReturn(true, false, false);
        }
    }

    // a - b
    changePlaceOfComma();
    if(minuend > subtrahend) {
        return subtractionForReturn(false, false, true);
    }
    else {
        return subtractionForReturn(true, true, true);
    }
}

Number Subtraction::additionForReturn(bool sign){
    Addition addition(minuend, subtrahend);
    Number result = addition.additionFinal();
    if(sign){
        result.setValue("-" + result.getValue());
    }
    return result;
}

Number Subtraction::subtractionForReturn(bool sign, bool reverseSubtraction, bool finalSubtraction) {
    Number result;
    if(reverseSubtraction){
        result = Subtraction(subtrahend, minuend).subtractionFloat();
    }
    else if(finalSubtraction){
        result = Subtraction(minuend, subtrahend).subtractionFloat();
    }
    else{
        result = Subtraction(minuend, subtrahend).subtractionFinal();
    }
    result.setSign(sign);

    result.prepareNumberForOutput();
    return result;
}

void Subtraction::changePlaceOfComma() {
    if(placeOfCommaInResultTakenFromMinuend()){
        //example first number x.xx, second number y.yyy  (x, y -> Natural number)
        addZerosToMinuend();
    }
    else{
        //example first number x.xxx, second number y.yy  (x, y -> Natural number)
        addZerosToSubtrahend();
        addZerosToMinuend();
    }
}

Number Subtraction::subtractionFloat(){
    placeOfCommaInResultTakenFromMinuend();
    Subtraction subtraction(minuend, subtrahend);
    Number result(subtraction.subtractionInt());
//    result.setValue(result.addComaAndSign(static_cast<int>(result.size() - placeOfCommaInResult)));
    result.setFloatingPos(placeOfCommaInResult);

    if(result.getFloatingPos() != 0){
        result.setFloating(true);
    }
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
    int minuendFPos = minuend.getFloatingPos();
    int subtrahendFPos = subtrahend.getFloatingPos();
    for (int i = 0; i < subtrahendFPos - minuendFPos; i++) {
//        for (int j = 0; j < subtrahend.getFloatingPos() - minuend.getFloatingPos(); j++)
        minuend.setValue(minuend.getValue() + "0");
        minuend.setFloatingPos(minuend.getFloatingPos() + 1);
    }

}

void Subtraction::addZerosToSubtrahend() {
    int minuendFPos = minuend.getFloatingPos();
    int subtrahendFPos = subtrahend.getFloatingPos();
    for(int i = 0 ; i < minuendFPos - subtrahendFPos; i++) {
        subtrahend.setValue(subtrahend.getValue() + "0");
        subtrahend.setFloatingPos(subtrahend.getFloatingPos() + 1);
    }
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

    return difference;
}

void Subtraction::caseWhereMinuendSmallerThanSubtrahend(size_t i) {
    if (digitFromMinuend < digitFromSubtrahend) {
        digitFromMinuend += 10;
        index = minuend.size() - i - 2;
        gettingTensFromHigherDigits();
        minuend.setDigitInPosition(index, (char)((int)minuend.getDigitFromPosition(index) - 1) + '0');
    }
}

void Subtraction::gettingTensFromHigherDigits(){
    while (minuend.getDigitFromPosition(index) == 0) {
        minuend.setDigitInPosition(index, 9 + '0');
        index--;
    }
}