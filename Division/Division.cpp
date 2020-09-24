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
        result.removeTrailingZeros();
        return result;
    }

    // (-a) * b = -(a*b)
    // a * (-b) = -(a*b)
    if((dividend.isPositive() && divisor.isNegative()) || (dividend.isNegative() && divisor.isPositive()))
    {
        dividend.setSign(false);
        divisor.setSign(false);

        Number result = Division(dividend, divisor).divisionFloat();
        result.setSign(true);
        result.removeTrailingZeros();
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
    quotient.setValue(quotient.addComaAndSign((int) (quotient.size() - (app + dividend.getFloatingPos()))));
    quotient.removeTrailingZeros();
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
    quotient.removeTrailingZeros();
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



// rounding

//    while(dividend.getFloatingPos() != 0){
//        int rest = (int) quotient.getValue()[quotient.size() - 1];
//        quotient.setValue(quotient.getValue().substr(0, quotient.size() - 1));
//        dividend.setFloatingPos(dividend.getFloatingPos() - 1);
//        if(rest >= 5){
//            quotient.setValue(quotient.getValue().substr(0, quotient.size() - 1));
//            quotient.setValue(quotient.getValue() + (char)((int) quotient.getValue()[quotient.size() - 1] + 1));
//        }
//    }