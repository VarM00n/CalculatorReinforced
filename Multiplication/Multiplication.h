//
// Created by VarMoon on 13.09.2020.
//

#ifndef CALCULATORREINFORED_MULTIPLICATION_H
#define CALCULATORREINFORED_MULTIPLICATION_H


#include <vector>

class Multiplication {
    Number multiplicand = Number("0");
    Number multiplier = Number("0");
    Number product = Number("0");
    unsigned digitFromMultiplicand = 0;
    unsigned digitFromMultiplier = 0;
    string singleProduct = "";
    vector<string> valuesForAddition = {};
    int placeOfCommaInResult = 0;
    unsigned carry = 0;


    void swapValuesIfMultiplierBigger();
    void addZerosAtTheEndToIncreaseAProduct(long position);
    void multiplicationMechanism(long position);
    void addNumberToAVectorForLaterAddition();
    void addNumbersFromVectorToAProduct();
public:
    Multiplication (Number &multiplicand, Number &multiplier);
    Number multiplicationInt();
    Number multiplicationFloat();
    Number multiplicationFinal();

};


#endif //CALCULATORREINFORED_MULTIPLICATION_H
