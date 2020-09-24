//
// Created by VarMoon on 10.09.2020.
//

#ifndef CALCULATORREINFORED_NUMBER_H
#define CALCULATORREINFORED_NUMBER_H
#include <string>
#include "NumberValidation.h"
#include "NumberCore.h"

using namespace std;

class Number : public NumberValidation {

public:

    void multiplyByTen();

    void sanitizeValue();


    string add_coma(int place_of_comma);

    int getFloatingPos();

    void setFloatingPos(int fp);

    explicit Number(int value);

    explicit Number(string value);



    unsigned getBiggerNumberSize(Number secondAddend);

    unsigned getDigitFromPosition(long position);

//    string getDigitFromPosition(long position, bool differ);



    void setNumberInPosition(long position, char digit);

    void setNumberInPosition(long position, unsigned digit);

    void removeTrailingZeros();

    static string removeTrailingZeros(string &number);

    bool isValueBigger(string val1, string val2);

    bool operator> (const Number& r);
//    bool operator< (const Number& r);
    bool operator== (const Number& r);
    bool operator!= (const Number& r);

    void caseWhereNumberEmpty();
    void caseWhereZerosAtTheBeginning();
//    long size();
    bool isNegative() const;
    bool isPositive() const;

};


#endif //CALCULATORREINFORED_NUMBER_H
