//
// Created by VarMoon on 10.09.2020.
//

#include "Number.h"
#include <string>
#include "../Multiplication/Multiplication.h"

//Constructors
Number::Number(int value){
    this->setValue(to_string(value));
    sanitizeValue();
}

Number::Number(string value) {
    this->setValue(value);
    if (this->getValue()[0] == '-')
        this->setSign(true);
    sanitizeValue();
}

//Public Methods
void Number::sanitizeValue() {
    string output;
    output.reserve((unsigned long)this->size());
    if (this->getValue() == "-0") {
        this->setSign(false);
        this->setValue("0");
        return;
    }
    for(int i = (int) this->size() - 1; i > 0; i--){
        if(this -> getValue()[i] == '.'){
            this->setFloatingPos((int) this->size() - 1 - i);
            this->setFloating(true);
            break;
        }
    }
    for (char i : this->getValue()) {
        if (i >= 48 && i <= 57 )
            output += i;
    }
    while (output[0] == '0') {
        output.erase(0, 1);
    }
    if (output.empty()) {
        this->setSign(false);
        this->setValue("0");
        return;
    }
    this->setValue(output);
//    if (this->getValue() == "0") {
//        this->setSign(false);
//    }
}

unsigned Number::getBiggerNumberSize(Number secondAddend) {
    if(this->size() >= secondAddend.size()){
        return (unsigned int) this->size();
    } else {
        return (unsigned int) secondAddend.size();
    }
}

unsigned Number::getDigitFromPosition(long position) {
    if (position < 0 || position > this->size() - 1)
        return 0;
    auto digit = unsigned(this->getValue()[position] - '0');
    return digit;
}

void Number::setDigitInPosition(long position, char digit) {
    if (position < 0 || position > this->size() - 1)
        return;
//    if (digit < (0 + '0') || digit > (9 + '0'))
//        return;
    this->setValue(this->getValue().substr(0, (unsigned long) position) + digit
        + this->getValue().substr((unsigned long) position + 1,(unsigned long) this->size()));
}

string Number::addComaAndSign(int place_of_comma){
    std::string value;
    value = "";
    if(this->isSign()){
        value += "-";
    }
    if((this->size() < place_of_comma) || (place_of_comma < 0)){
        return "-1";
    }
    for(int i = 0 ; i < this->size(); i++){
        if(i == place_of_comma) {
            value += (char) 46;
            value += this->getValue()[i];
        }
        else{
            value += this->getValue()[i];
        }
    }
    return value;
}
//TODO removeTrailingZeros - to add
void Number::multiplyByTen() {
    if(this->getFloatingPos() != 0) {
        this->setFloatingPos(this->getFloatingPos() - 1);
    }
    else{
        this->sanitizeValue();
        this->setValue(this->getValue() + "0");
    }
    //remove trailing zeros
}

//Operators Overload
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
    return false;
}

bool Number::operator>(const Number &r) {
    return this->isValueBigger(this->getValue(), r.getValue());
}

bool Number::operator==(const Number &r) {
    return this->getValue() == r.getValue();
}

bool Number::operator!=(const Number &r) {
    return !operator==(r);
}

Number::Number() {

}
