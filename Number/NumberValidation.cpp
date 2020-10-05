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
        else{
            break;
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
        if (this->isFloating() && preparedFloat()) {
            while (this->size() < this->getFloatingPos() + 1) {
                this->setValue('0' + this->getValue());
            }
            for (int i = this->size(); i > 0; i--) {
                if (i == this->size() - this->getFloatingPos()) {
                    this->setValue(this->getValue().substr(0, i) + '.' + this->getValue().substr(i, this->size()));
                    break;
                }
            }
        }
        while (this->isFloating() && this->getValue()[this->size() - 1] == '0' &&
               this->getValue()[this->size() - 2] != '.' && this->getValue() != "0") {
            this->setValue(this->getValue().substr(0, (unsigned long) this->size() - 1));
        }
        if (this->isSign()) {
            this->setValue('-' + this->getValue());
        }

        if (this->isFloating() && this->getValue()[0] == '.') {
            this->setValue('0' + this->getValue());
        }
        if (this->isFloating() && this->isSign() && this->getValue()[0] == '.') {
            this->setValue("-0" + this->getValue());
        }

}

bool NumberValidation::preparedFloat(){
    for(int i = 0; i < this->size(); i++){
        if(this->getValue()[i] == '.')
            return false;
    }
    return true;
}

bool NumberValidation::preparedSign(){
    for(int i = 0; i < this->size(); i++){
        if(this->getValue()[i] == '-')
            return false;
    }
    return true;
}