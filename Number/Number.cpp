//
// Created by VarMoon on 10.09.2020.
//

#include "Number.h"

Number::Number(int value){
    this->value = std::to_string(value);
}

Number::Number(string value) {
    this->value = value;
}

long Number::size() {
    return this->value.size();
}

unsigned Number::getBiggerNumber(Number secondAddend) {
    if(this->size() >= secondAddend.size()){
        return this->size();
    } else {
        return secondAddend.size();
    }
}

long Number::TEST_getBiggerNumber(Number firstAddend, Number secondAddend){
    if(firstAddend.size() >= secondAddend.size()){
        return firstAddend.size();
    } else {
        return secondAddend.size();
    }
}

unsigned Number::getDigitFromPosition(long position) {
    if (position < 0)
        return 0;
    auto digit = unsigned(this->value[position] - '0');
    return digit;
}

void Number::setValue(const string &value) {
    Number::value = value;
}


const string &Number::getValue() const {
    return value;
}

void Number::setNumberInPosition(long position, char digit) {
    // todo tutaj jest dziwny błąd podczas debugu
    if (position < 0 || position > this->size() - 1)
        return;
//        __builtin_trap();
    if (digit < (0 + '0') || digit > (9 + '0'))
        return;
//        __builtin_trap();

    this->value[position] = digit;
}

void Number::setNumberInPosition(long position, unsigned digit) {
    this->setNumberInPosition(position, (char) (digit + '0'));
}

string Number::removeTrailingZeros(string &number) {
    while(number[0] == '0' && number.size() != 1){
        number.erase(0, 1);
    }
    return number;
}