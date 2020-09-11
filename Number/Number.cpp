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
