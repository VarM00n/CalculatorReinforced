//
// Created by VarMoon on 13.09.2020.
//

#include "../Number/Number.h"
#include "../Addition/Addition.h"
#include <iostream>
#include "Multiplication.h"

Multiplication::Multiplication(Number &multiplicand, Number &multiplier): multiplicand(0), multiplier(0), product(0) {
    this->multiplicand = multiplicand;
    this->multiplier = multiplier;
}

Number Multiplication::multiplicationFinal() {
    // a * 0 = 0
    // 0 * b = 0
    if(multiplicand == Number("0") || multiplier == Number("0"))
        return Number("0");

    // a * b = a * b
    // (-a) * (-b) = a*b
    if((multiplicand.isPositive() && multiplier.isPositive()) || (multiplicand.isNegative() && multiplier.isNegative())) {
        multiplicand.setSign(false);
        multiplier.setSign(false);
        return Multiplication(multiplicand, multiplier).multiplicationFloat();
    }

    // (-a) * b = -(a*b)
    // a * (-b) = -(a*b)
    if((multiplicand.isPositive() && multiplier.isNegative()) || (multiplicand.isNegative() && multiplier.isPositive()))
    {
        multiplicand.setSign(false);
        multiplier.setSign(false);

        Number result = Multiplication(multiplicand, multiplier).multiplicationFloat();
        result.setValue('-' + result.getValue());
        return result;
    }

    return Number("0");
}

Number Multiplication::multiplicationFloat() {
    placeOfCommaInResult = multiplicand.getFloatingPos() + multiplier.getFloatingPos();
    product = Multiplication(multiplicand, multiplier).multiplicationInt();
    product.setFloatingPos(placeOfCommaInResult);
    if(static_cast<int>(placeOfCommaInResult) != 0){
        product.setFloating(true);
    }
    product.prepareNumberForOutput();
    return product;
}

Number Multiplication::multiplicationInt() {
    swapValuesIfMultiplierBigger();
    //TODO add a comment of some kind or rewrite inside of for loop for better understanding
    for (long position = multiplier.size() - 1; position >= 0; position--) {
        addZerosAtTheEndToIncreaseAProduct(position);
        multiplicationMechanism(position);
        addNumberToAVectorForLaterAddition();
    }
    addNumbersFromVectorToAProduct();
    return product;
}

void Multiplication::swapValuesIfMultiplierBigger(){
    if (multiplicand.size() < multiplier.size()) {
        swap(multiplicand, multiplier);
    }
}

void Multiplication::addZerosAtTheEndToIncreaseAProduct(long position){
    for (long k = multiplier.size() - position - 1; k > 0; --k) {
        singleProduct.insert(0, "0");
    }
}

void Multiplication::multiplicationMechanism(long position) {
    for (long j = multiplicand.size() - 1; j >= 0; j--) {
        digitFromMultiplicand = multiplicand.getDigitFromPosition(j);
        digitFromMultiplier = multiplier.getDigitFromPosition(position);
        unsigned singleMultiplication = (digitFromMultiplicand * digitFromMultiplier + carry);
        singleProduct.insert(0, to_string((singleMultiplication % 10)));
        carry = singleMultiplication / 10;
    }
    singleProduct.insert(0, to_string(carry));
    carry = 0;
}

void Multiplication::addNumberToAVectorForLaterAddition(){
//    singleProduct = Number::removeTrailingZeros(singleProduct);
    valuesForAddition.push_back(singleProduct);
    singleProduct = "";
}

void Multiplication::addNumbersFromVectorToAProduct(){
    for (const auto &i : valuesForAddition) {
        Number iN(i);
        Addition addition(product, iN);
        product = addition.additionInt();
    }
}