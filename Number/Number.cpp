//
// Created by VarMoon on 10.09.2020.
//

#include "Number.h"

Number::Number(int value){
    this->value = std::to_string(value);
}

long Number::size() {
    return this->value.size();
}

long Number::getBiggerNumber(Number secondNumberToCompareWith) {
    if(this->size() >= secondNumberToCompareWith.size()){
        return this->size();
    } else {
        return secondNumberToCompareWith.size();
    }
}

long Number::TEST_getBiggerNumber(Number firstAddend, Number secondAddend){
    if(firstAddend.size() >= secondAddend.size()){
        return firstAddend.size();
    } else {
        return secondAddend.size();
    }
}
