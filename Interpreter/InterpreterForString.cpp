//
// Created by VarMoon on 05.10.2020.
//

#include "InterpreterForString.h"
#include "CleanStringForInterpreter.h"

#include <iostream>
#include <string>

using namespace std;

//Constructor
InterpreterForString::InterpreterForString(const string &operation) {
    this->operation = operation;
}

//Methods
string InterpreterForString::stringOperation(){
    cleanString();
    if(!this->isValidInput()){
        return "-1";
    }
    else {
        parseString();
        if(!this->isValidInput()){
            return "-1";
        }
        createONP();
        return calculateONP();
    }
}