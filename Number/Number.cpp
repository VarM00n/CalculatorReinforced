//
// Created by VarMoon on 10.09.2020.
//

#include "Number.h"
#include <string>

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

string Number::getDigitFromPosition(long position, bool differ) {
    if (position < 0)
        return 0;
    string digit = to_string(this->value[position] - '0');
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

void Number::removeTrailingZeros() {
    while(this->value[0] == '0' && this->value.size() != 1){
        this->setValue(this->value.erase(0, 1));
    }
}

string Number::removeTrailingZeros(string &number) {
    while(number[0] == '0' && number.size() != 1){
        number.erase(0, 1);
    }
    return number;
}

bool Number::isValueBigger(string val1, string val2) {
    if (val1.size() > val2.size())
        return true;
    else if (val1.size() < val2.size())
        return false;
    else
        for (int i = 0; i < val1.size(); ++i) {
            if (val1[i] > val2[i])
                return true;
            else if (val1[i] < val2[i])
                return false;
        }

    // is equal
    return false;
}

bool Number::operator>(const Number &r) {
        return this->isValueBigger(this->value, r.value);
}

//bool Number::operator<(const Number &r) {
//    if (!this->sign && r.sign)
//        return false;
//    if (this->sign && !r.sign)
//        return true;
//
//    if (this->sign == r.sign) {
//        if (this->value == r.value)
//            return false;
//
//        return !this->isValueBigger(this->value, r.value);
//    }
//
//    return true;
//}
//
bool Number::operator==(const Number &r) {
    return this->value == r.value;
}
//
//bool Number::operator!=(const Number &r) {
//    return !operator==(r);
//}
//
