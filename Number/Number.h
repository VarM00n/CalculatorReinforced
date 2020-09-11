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
    Number(int value);

    Number(string value);

    long size();

    unsigned getBiggerNumber(Number secondAddend);
    static long TEST_getBiggerNumber(Number firstAddend, Number secondAddend);

    unsigned getDigitFromPosition(long position);

    void setValue(const string &value);

    const string &getValue() const;

};


#endif //CALCULATORREINFORED_NUMBER_H
