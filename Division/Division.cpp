//
// Created by VarMoon on 13.09.2020.
//

#include <Number.h>
#include <iostream>
#include <Subtraction.h>
#include <Multiplication.h>
#include "Division.h"


Division::Division(Number &dividend, Number &divisor): dividend(0), divisor(0), quotient(""), temporaryDividend(""){
    this->dividend = dividend;
    this->divisor = divisor;
    this->temporaryDividend.setValue("");
    this->quotient.setValue("");
}

Number Division::divisionFloat() {
    placeOfComma = divisor.getFloatingPos();
    for(int i = 0; i < placeOfComma; i++){
        Number tens("10");
        if(dividend.getFloatingPos() != 0) {
            dividend.setFloatingPos(dividend.getFloatingPos() - 1);
        }
        else{
            dividend.sanitizeValue();
            dividend.setValue(Multiplication(dividend,tens).multiplicationInt().getValue());
        }

        if(divisor.getFloatingPos() != 0){
            divisor.setFloatingPos(divisor.getFloatingPos() - 1);
        }
        else{
            tens.setValue("10");
            divisor.sanitizeValue();
            divisor.setValue(Multiplication(divisor,tens).multiplicationInt().getValue());
        }
    }
    for(int i = 0; i < app; i++){
        Number tens("10");
        if(dividend.getFloatingPos() != 0) {
            dividend.setFloatingPos(dividend.getFloatingPos() - 1);
        }
        else{
            dividend.sanitizeValue();
            dividend.setValue(Multiplication(dividend,tens).multiplicationInt().getValue());
        }
    }

    dividend.sanitizeValue();
    divisor.sanitizeValue();
    cout << "Pierwszy: " << dividend.getValue();
    cout << " Drugi: " << divisor.getValue() << endl;

    quotient.setValue(Division(dividend,divisor).divisionInt().getValue());
    //problem
    cout << "Wynik: " << quotient.getValue() << endl;
    quotient.setValue(quotient.add_coma(static_cast<int>(quotient.size() - (app + dividend.getFloatingPos()))));
    while(dividend.getFloatingPos() != 0){
        int rest = (int) quotient.getValue()[quotient.size() - 1];
        quotient.setValue(quotient.getValue().substr(0, quotient.size() - 1));
        dividend.setFloatingPos(dividend.getFloatingPos() - 1);
        if(rest >= 5){
            quotient.setValue(quotient.getValue().substr(0, quotient.size() - 1));
            quotient.setValue(quotient.getValue() + (char)((int) quotient.getValue()[quotient.size() - 1] + 1));
        }
    }
    quotient.removeTrailingZeros();
    return quotient;
}

bool Division::checkForComma(Number &number){
    for(int i = 0; i < number.size(); i++){
        if(number.getValue()[i] == '.'){
            return true;
        }
    }
    return false;
}

Number Division::divisionInt() {
    while(!dividend.getValue().empty()){
        temporaryDividend.setValue( temporaryDividend.getValue() + dividend.getValue().substr(0, 1));
        dividend.setValue(dividend.getValue().substr(1, static_cast<unsigned long>(dividend.size())));
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