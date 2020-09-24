//
// Created by VarMoon on 24.09.2020.
//

#include "NumberValidation.h"

void NumberValidation::removeTrailingZeros() {

}

//void NumberValidation::caseWhereZerosAtTheBeginning(){
//    string valueForCheck = this->getValue();
//    while(!this->floating && !this->sign && this->getValue()[0] == '0'){
//        this->setValue(this->getValue().substr(1, (unsigned long) this->size() - 1));
//    }
//}

//void Number::removeTrailingZeros() {
////    while(this->value[0] == '0' && this->value.size() != 1){
////        this->setValue(this->value.erase(0, 1));
////    }
////    caseWhereNumberEmpty();
//    caseWhereZerosAtTheBeginning();
//    while ((this->getValue()[0] == '0' && this->getValue()[1] != '.' && this->floating) || this->getValue()[0] == '-')
//        this->setValue(this->getValue().substr(1, static_cast<unsigned long>(this->size())));
//
//    if(this->getValue()[0] != '-' && this->isNegative()){
//        this->setValue('-' + this->getValue());
//    }
//}

//void Number::caseWhereNumberEmpty(){
//    if (this->getValue().empty()) {
//        this->setValue("0");
//    }
//}

//void Number::caseWhereZerosAtTheBeginning(){
//    string valueForCheck = this->getValue();
//    while(!this->floating && !this->sign && this->getValue()[0] == '0'){
//        this->setValue(this->getValue().substr(1, (unsigned long) this->size() - 1));
//    }
//}

//
//string Number::removeTrailingZeros(string &number) {
//    while(number[0] == '0' && number.size() != 1){
//        number.erase(0, 1);
//    }
//    return number;
//}