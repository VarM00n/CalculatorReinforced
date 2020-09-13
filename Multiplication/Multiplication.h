//
// Created by VarMoon on 13.09.2020.
//

#ifndef CALCULATORREINFORED_MULTIPLICATION_H
#define CALCULATORREINFORED_MULTIPLICATION_H


#include <vector>

class Multiplication {
    Number multiplicand;
    Number multiplier;
    Number product;
    unsigned digitFromMultiplicand;
    unsigned digitFromMultiplier;
    string singleProduct = "";
    vector<string> valuesForAddition = {};

    unsigned carry = 0;


    void swapValuesIfMultiplierBigger();
    void addZerosAtTheEndToIncreaseAProduct(long position);
    void multiplicationMechanism(long position);
    void addNumberToAVectorForLaterAddition();
    void addNumbersFromVectorToAProduct();
public:
    Multiplication (Number &multiplicand, Number &multiplier);
    Number multiplicationInt();


};


#endif //CALCULATORREINFORED_MULTIPLICATION_H
