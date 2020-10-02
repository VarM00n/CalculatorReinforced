//
// Created by VarMoon on 13.09.2020.
//

#include "../Number/Number.h"
#include <iostream>
#include "../Subtraction/Subtraction.h"
#include "Division.h"


Division::Division(Number &dividend, Number &divisor): dividend(0), divisor(0), quotient(""), temporaryDividend(""){
    this->dividend = dividend;
    this->divisor = divisor;
    this->temporaryDividend.setValue("");
    this->quotient.setValue("");
}


Number Division::divisionFinal() {
    // a / 0 = 0
    // 0 / b = 0
    if(dividend == Number("0") || divisor == Number("0"))
        return Number("0");

    // a / b = a / b
    // (-a) / (-b) = a/b
    if((dividend.isPositive() && divisor.isPositive()) || (dividend.isNegative() && divisor.isNegative())) {
        dividend.setSign(false);
        divisor.setSign(false);
        Number result = Division(dividend, divisor).divisionFloat();
//        result.removeTrailingZeros();
        return result;
    }

    // (-a) * b = -(a*b)
    // a * (-b) = -(a*b)
    if((dividend.isPositive() && divisor.isNegative()) || (dividend.isNegative() && divisor.isPositive()))
    {
        dividend.setSign(false);
        divisor.setSign(false);

        Number result = Division(dividend, divisor).divisionFloat();
        result.setValue('-' + result.getValue());

//        result.removeTrailingZeros();
//        result.prepareNumberForOutput();
        return result;
    }

    return Number("0");
}

Number Division::divisionFloat() {
    placeOfComma = divisor.getFloatingPos();
    for(int i = 0; i < placeOfComma; i++){
        dividend.multiplyByTen();
        divisor.multiplyByTen();
    }
    for(int i = 0; i < app; i++){
        dividend.multiplyByTen();
    }
    dividend.sanitizeValue();
    divisor.sanitizeValue();
    quotient.setValue(Division(dividend,divisor).divisionInt().getValue());
    quotient.setFloatingPos(app + dividend.getFloatingPos());
    if(app + dividend.getFloatingPos() != 0){
        quotient.setFloating(true);
    }
    quotient.prepareNumberForOutput();
    for(int i = 0; i < dividend.getFloatingPos(); i++){
        if(quotient.getValue()[quotient.size() - app - 1] == '.'){
            break;
        }
        quotient.setValue(quotient.getValue().substr(0, (unsigned long) quotient.size() - 1));
    }
    return quotient;
}



Number Division::divisionInt() {
    while(!dividend.getValue().empty()){
        temporaryDividend.setValue( temporaryDividend.getValue() + dividend.getValue().substr(0, 1));
        dividend.setValue(dividend.getValue().substr(1, (unsigned  long) dividend.size()));
        simpleDivisionMechanism();
        caseWhereDivisionHasNotBeenProcessed();
        caseWhereDivisionHasBeenProcessed();
        settingTemporaryDividendFromZeroToEmpty();
        temporaryResult = 0;
    }
//    quotient.removeTrailingZeros();
    return quotient;
}

void Division::simpleDivisionMechanism(){
    while(temporaryDividend > divisor || temporaryDividend == divisor){
        Subtraction subtraction(temporaryDividend, divisor);
        temporaryDividend = subtraction.subtractionInt();
        settingTemporaryDividendFromZeroToEmpty();
        temporaryResult++;
        flagDoneDivision = true;
    }
}

void Division::settingTemporaryDividendFromZeroToEmpty(){
    if(temporaryDividend == Number("0")){
        temporaryDividend.setValue("");
    }
}

void Division::caseWhereDivisionHasNotBeenProcessed(){
    if(!flagDoneDivision){
        quotient.setValue(quotient.getValue() + "0");
    }
}

void Division::caseWhereDivisionHasBeenProcessed(){
    if(flagDoneDivision) {
        quotient.setValue(quotient.getValue() + to_string(temporaryResult));
    }
}



void Division::round(){

}