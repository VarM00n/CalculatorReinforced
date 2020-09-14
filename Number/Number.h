//
// Created by VarMoon on 10.09.2020.
//

#ifndef CALCULATORREINFORED_NUMBER_H
#define CALCULATORREINFORED_NUMBER_H
#include <string>

using namespace std;

class Number {
private:
    string value;

public:
    explicit Number(int value);

    explicit Number(string value);

    long size();

    unsigned getBiggerNumber(Number secondAddend);
    static long TEST_getBiggerNumber(Number firstAddend, Number secondAddend);

    unsigned getDigitFromPosition(long position);

    string getDigitFromPosition(long position, bool differ);

    void setValue(const string &value);

    const string &getValue() const;

    void setNumberInPosition(long position, char digit);

    void setNumberInPosition(long position, unsigned digit);

    void removeTrailingZeros();

    static string removeTrailingZeros(string &number);

    bool isValueBigger(string val1, string val2);

    bool operator> (const Number& r);
//    bool operator< (const Number& r);
    bool operator== (const Number& r);
//    bool operator!= (const Number& r);


};


#endif //CALCULATORREINFORED_NUMBER_H
