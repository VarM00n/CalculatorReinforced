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

    long size();

    long getBiggerNumber(Number secondNumberToCompareWith);

    static long TEST_getBiggerNumber(Number firstAddend, Number secondAddend);

};


#endif //CALCULATORREINFORED_NUMBER_H
