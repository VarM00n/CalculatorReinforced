//
// Created by VarMoon on 13.09.2020.
//

#include <Number.h>
#include <Addition.h>
#include <iostream>
#include "Multiplication.h"

Multiplication::Multiplication(Number &multiplicand, Number &multiplier): multiplicand(0), multiplier(0), product(0) {
    this->multiplicand = multiplicand;
    this->multiplier = multiplier;
}

Number Multiplication::multiplicationInt() {
    swapValuesIfMultiplierBigger();
    //TODO add a comment of some kind or rewrite inside of for loop for better understanding
    for (long position = multiplicand.size() - 1; position >= 0; position--) {
        addZerosAtTheEndToIncreaseAProduct(position);
        multiplicationMechanism(position);
        addNumberToAVectorForLaterAddition();
    }
    addNumbersFromVectorToAProduct();
    cout << product.getValue();
    return product;
}

void Multiplication::swapValuesIfMultiplierBigger(){
    if (multiplicand.size() < multiplier.size())
        swap(multiplicand, multiplier);
}

void Multiplication::addZerosAtTheEndToIncreaseAProduct(long position){
    for (long k = multiplicand.size() - position - 1; k > 0; --k) {
        singleProduct.insert(0, "0");
    }
}

void Multiplication::multiplicationMechanism(long position) {
    for (long j = multiplier.size() - 1; j >= 0; j--) {
        digitFromMultiplicand = multiplicand.getDigitFromPosition(position);
        digitFromMultiplier = multiplier.getDigitFromPosition(j);
        unsigned singleMultiplication = (digitFromMultiplicand * digitFromMultiplier + carry);
        singleProduct.insert(0, to_string((singleMultiplication % 10)));
        carry = singleMultiplication / 10;
    }
    singleProduct.insert(0, to_string(carry));
}

void Multiplication::addNumberToAVectorForLaterAddition(){
    singleProduct = Number::removeTrailingZeros(singleProduct);
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