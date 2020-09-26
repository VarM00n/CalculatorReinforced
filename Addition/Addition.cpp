//
// Created by VarMoon on 10.09.2020.
//

#include <iostream>
#include "Addition.h"
#include "../Subtraction/Subtraction.h"
#include "../Number/Number.h"

using namespace std;

Addition::Addition(Number &firstAddend, Number &secondAddend): firstAddend(0), secondAddend(0){
    this->firstAddend = firstAddend;
    this->secondAddend = secondAddend;
    this->placeOfCommaInResult = this->secondAddend.getFloatingPos();
}

Number Addition::additionFinal() {
    Addition addition(firstAddend, secondAddend);
    // a + (-b) = a - b
    if (firstAddend.isPositive() && secondAddend.isNegative()) {
        secondAddend.setSign(false);
        return Subtraction(firstAddend, secondAddend).preSubtract();
    }

    // (-a) + b = b - a
    if (firstAddend.isNegative() && secondAddend.isPositive()) {
        firstAddend.setSign(false);

        return Subtraction(secondAddend, firstAddend).preSubtract();
    }

    // (-a) + (-b) = -(a+b)
    if (firstAddend.isNegative() && secondAddend.isNegative()) {
        firstAddend.setSign(false);
        secondAddend.setSign(false);

        Number result = addition.additionFloat();
        result.setSign(true);
        result.prepareNumberForOutput();
        return result;
    }

    // a + b
    return addition.additionFloat();
}

Number Addition::additionFloat(){
    if(placeOfCommaInResultTakenFromSecondAddend()){
        //example first number x.xx, second number y.yyy  (x, y -> Natural number)
        addingZerosToFirstAddend();
    }
    else {
        //example first number x.xxx, second number y.yy  (x, y -> Natural number)
        addingZerosToSecondAddend();
    }
    //addition
    Addition addition(firstAddend, secondAddend);
    Number result(addition.additionInt());
    result.setValue(result.addComaAndSign(static_cast<int>(result.size() - placeOfCommaInResult)));
    result.prepareNumberForOutput();
//    cout <<"Wynik: " << result.getValue();
//    addition.additionInt();
//    sum.setValue(sum.addComaAndSign(static_cast<int>(sum.size() - placeOfCommaInResult)));
    return result;
}

bool Addition::placeOfCommaInResultTakenFromSecondAddend(){
    if (placeOfCommaInResult < firstAddend.getFloatingPos()){
        placeOfCommaInResult = firstAddend.getFloatingPos();
        return false;
    }
    return true;
}

void Addition::addingZerosToFirstAddend(){
    for (int i = 0; i < secondAddend.getFloatingPos() - firstAddend.getFloatingPos(); i++) {
        firstAddend.setValue(firstAddend.getValue() + "0");
    }
}
void Addition::addingZerosToSecondAddend() {
    for(int i = 0 ; i < firstAddend.getFloatingPos() - secondAddend.getFloatingPos(); i++) {
        secondAddend.setValue(secondAddend.getValue() + "0");
    }
}


Number Addition::additionInt() {
    unsigned long sizeOfBiggerNumber = firstAddend.getBiggerNumberSize(secondAddend);
    long counterForFirstAddend = firstAddend.size() - 1;
    long counterForSecondAddend = secondAddend.size() - 1;
    //TODO go around sum -> 0 at the beg
    sum.setValue("");
    unsigned carry = 0;
    for (size_t i = 0; i < sizeOfBiggerNumber + 1; counterForFirstAddend--,
            counterForSecondAddend--, i++) {
        digitFromFirstAddend = firstAddend.getDigitFromPosition(counterForFirstAddend);
        digitFromSecondAddend = secondAddend.getDigitFromPosition(counterForSecondAddend);
        unsigned numberToPutIntoSum = digitFromFirstAddend + digitFromSecondAddend + carry;
        carry = numberToPutIntoSum / 10;
        sum.setValue(to_string((numberToPutIntoSum % 10)) + sum.getValue());
    }
    sum.prepareNumberForOutput();
    return sum;
}


