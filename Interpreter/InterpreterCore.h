//
// Created by VarMoon on 06.10.2020.
//

#ifndef CALCULATORREINFORED_INTERPRETERCORE_H
#define CALCULATORREINFORED_INTERPRETERCORE_H

#include <iostream>
#include <string>
#include <stack>
#include <list>

using namespace std;

class InterpreterCore {
public:
    string operation;
    bool validInput = true;
    string ONP;
    list<string> stringAfterParsing;

    char tableOfOperations [13][4] = {
            {'-', '-', '+', '0'},
            {'-', '+', '-', '0'},
            {'+', '-', '-', '0'},

            //błąd
            {'*', '/', '*', '1'},
            {'+', '+', '+', '1'},
            {'-', '-', '-', '1'},
            {'*', '*', '*', '1'},
            {'/', '*', '/', '1'},
            {'/', '/', '/', '1'},
            {'-', '/', '-', '1'},
            {'+', '/', '+', '1'},
            {'-', '*', '8', '1'},
            {'+', '*', '+', '1'},
    };
    char operands [6][2] = {
            {'(', '0'},
            {')', '1'},
            {'+', '1'},
            {'-', '1'},
            {'*', '2'},
            {'/', '2'},
    };
    stack <string> stackForONP;
    stack <string> calculatingONP;

public:
    const string &getOperation() const {
        return operation;
    }

    void setOperation(const string &operation) {
        InterpreterCore::operation = operation;
    }

    bool isValidInput() const {
        return validInput;
    }

};


#endif //CALCULATORREINFORED_INTERPRETERCORE_H
