//
// Created by VarMoon on 05.10.2020.
//

#ifndef CALCULATORREINFORED_CLEANSTRINGFORINTERPRETER_H
#define CALCULATORREINFORED_CLEANSTRINGFORINTERPRETER_H

#include <iostream>
#include <list>
#include "string"

using namespace std;

class CleanStringForInterpreter {
protected:
    string operation;
    bool validInput = true;
    char tableOfOperations [9][3] = {
            {'-', '-', '+'},
            {'-', '+', '-'},
            {'+', '-', '-'},

            //error
            {'*', '/', '*'},
            {'/', '*', '/'},
            {'-', '/', '-'},
            {'+', '/', '+'},
            {'-', '*', '8'},
            {'+', '*', '+'},
    };

public:
    void cleanString();
    void careOfSpaces();
    void careOfBrackets();
    void numberValidation();
    bool checkIfValidChar(char character);
    void careOfSigns();
    int combinationOfOperations(int i);
    void checkFirstChar();
    void setOperation(std::string operation);
    std::string getOperation();
    bool isValidInput() const;

};


#endif //CALCULATORREINFORED_CLEANSTRINGFORINTERPRETER_H
