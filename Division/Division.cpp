//
// Created by VarMoon on 13.09.2020.
//

#include <Number.h>
#include <iostream>
#include <Subtraction.h>
#include "Division.h"


Division::Division(Number &dividend, Number &divisor): dividend(0), divisor(0), quotient(""), temporaryDividend(""){
    this->dividend = dividend;
    this->divisor = divisor;
    this->temporaryDividend.setValue("");
    this->quotient.setValue("");
}

Number Division::divisionInt() {
    while(!dividend.getValue().empty() ) {
        temporaryDividend.setValue( temporaryDividend.getValue() + dividend.getValue().substr(0, 1));
        dividend.setValue(dividend.getValue().substr(1, static_cast<unsigned long>(dividend.size())));
        caseWhereTemporaryDividendEqZero();
        whileDivisorBiggerThanTemporaryDivident();
        simpleDivisionMechanism();
    }
    quotient.removeTrailingZeros();
    return quotient;
}

void Division::whileDivisorBiggerThanTemporaryDivident(){
    while (divisor > temporaryDividend && !dividend.getValue().empty()) {
        temporaryDividend.setValue(temporaryDividend.getValue() + dividend.getValue().substr(0, 1));
        dividend.setValue(dividend.getValue().substr(1, static_cast<unsigned long>(dividend.size())));
    }
}

void Division::simpleDivisionMechanism(){
    while(temporaryDividend > divisor || temporaryDividend == divisor){
        Subtraction subtraction(temporaryDividend, divisor);
        temporaryDividend = subtraction.subtractionInt();
        settingTemporaryDividendFromZeroToEmpty();
        temporaryResult++;
    }
    quotient.setValue(quotient.getValue() + to_string(temporaryResult));
    temporaryResult = 0;
}

void Division::settingTemporaryDividendFromZeroToEmpty(){
    if(temporaryDividend == Number("0")){
        temporaryDividend.setValue("");
    }
}

void Division::caseWhereTemporaryDividendEqZero(){
    while(temporaryDividend == Number("0") && !dividend.getValue().empty()){
        quotient.setValue(quotient.getValue() + '0');
        dividend.setValue(dividend.getValue().substr(1, static_cast<unsigned long>(dividend.size())));
        temporaryDividend.setValue(dividend.getValue().substr(0, 1));
    }
}
