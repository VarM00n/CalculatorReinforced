//
// Created by VarMoon on 24.09.2020.
//

#include "NumberValidation.h"

void NumberValidation::removeTrailingZeros() {
    caseWhereZerosAtTheBeginning();
    caseWhereNumberEmpty();
}

void NumberValidation::caseWhereZerosAtTheBeginning(){
    //Integer
    while(!this->isFloating() && !this->isNegative() && this->getValue()[0] == '0'){
        this->setValue(this->getValue().substr(1, (unsigned long) this->size() - 1));
    }
    //Floating && Sign
    while(this->isFloating() && this->getValue()[0] == '0'){
        if(this->size() - this->getFloatingPos() != 1){
            this->setValue(this->getValue().substr(1, (unsigned long) this->size() - 1));
        }
    }
}

void NumberValidation::caseWhereNumberEmpty() {
    if(this->getValue().empty()){
        this->setValue("0");
    }
}

void NumberValidation::prepareNumberForOutput(){
    this->removeTrailingZeros();
    if(this->isFloating()){
        for(int i = this->size(); i >0; i--){
            if(i == this->size() - this->getFloatingPos()){
                this->setValue(this->getValue().substr(0, i) + '.' + this->getValue().substr(i, this->size()));
            }
        }
    }
    if(this->isSign()){
        this->setValue('-' + this->getValue());
    }
}

