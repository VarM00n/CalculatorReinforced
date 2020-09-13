//
// Created by VarMoon on 13.09.2020.
//

#include <Number.h>
#include "Division.h"


Division::Division(Number &dividend, Number &divisor): dividend(0), divisor(0), quotient(""){
    this->dividend = dividend;
    this->divisor = divisor;
}



Number Division::divisionOperation(Number &n1, Number &n2){ //1 1.25
    string temp2 = n1.getValue();
    string result;
    result = "";
    string rest;
    int help = 0;
    if(n2.getValue() == "0"){
//        return ---; //obsługa błędu
    }
    Number temp2num(temp2);
    while((Number(temp2) > n2) || (temp2num == n2)) {
        Number temp("");
        int counter = 0;
        while (n2 > temp) { // tu problem
            temp.setValue(removeTrailingZeros(temp.getValue() + temp2[0]));
            unsigned long numberOfZeros = temp2.size() - 1;
            temp2[0] = '0';
            temp2 = removeOneZero(temp2);
            string temp2temp = temp2;
            if(temp2.empty()){
                temp2 = "0";
            }
            string newtemp2 = removeTrailingZeros(temp2);
            if (Number(newtemp2) == Number("0")){
                temp.setValue(temp.getValue() + temp2temp);
                temp2 = "";
                help = 1;
            }
            counter++;
        }
        if(temp.size() - rest.size() > 1 && help != 1){
            result += '0';
        }
        string temp3 = "0";
        while (temp > n2 || temp == n2) {
            temp3 = addition(temp3, "1");
            temp.setValue(removeTrailingZeros(substract(temp, n2).getValue()));
        }
        result += temp3;
        temp2 = temp.getValue() + temp2;
        temp2num.setValue(temp2);
        rest = temp.getValue();
    }
    return Number(result);
}
