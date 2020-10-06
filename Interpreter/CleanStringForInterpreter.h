//
// Created by VarMoon on 05.10.2020.
//

#ifndef CALCULATORREINFORED_CLEANSTRINGFORINTERPRETER_H
#define CALCULATORREINFORED_CLEANSTRINGFORINTERPRETER_H

#include <iostream>
#include <list>
#include "string"
#include "InterpreterCore.h"


using namespace std;

class CleanStringForInterpreter: public InterpreterCore {
public:
    void cleanString();
    void careOfSpaces();
    void careOfBrackets();
    void numberValidation();
    bool checkIfValidChar(char character);
    void careOfSigns();
    int combinationOfOperations(int i);
    void checkFirstChar();

    void parseString();
};


#endif //CALCULATORREINFORED_CLEANSTRINGFORINTERPRETER_H
