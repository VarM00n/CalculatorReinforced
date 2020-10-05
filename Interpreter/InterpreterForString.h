//
// Created by VarMoon on 05.10.2020.
//

#ifndef CALCULATORREINFORED_INTERPRETERFORSTRING_H
#define CALCULATORREINFORED_INTERPRETERFORSTRING_H

#include <string>
#include <list>
#include <iostream>

using namespace std;

class InterpreterForString {
private:
    string operation;
    bool validInput = true;
    char tableOfOperations [9][3] = {
            {'-', '-', '+'},
            {'-', '+', '-'},
            {'+', '-', '-'},

            //błąd
            {'*', '/', '*'},
            {'/', '*', '/'},
            {'-', '/', '-'},
            {'+', '/', '+'},
            {'-', '*', '8'},
            {'+', '*', '+'},
    };

public:
    list<string> stringAfterParsing;
    void stringOperation();
    void cleanString();
    void careOfSpaces();
    void careOfBrackets();
    void numberValidation();
    bool checkIfValidChar(char character);
    void careOfSigns();
    int combinationOfOperations(int i);
    void checkFirstChar();
    void setOperation(string operation);
    string getOperation();
    bool isValidInput() const;
    explicit InterpreterForString(const string &operation);
    void parseString();

    };


#endif //CALCULATORREINFORED_INTERPRETERFORSTRING_H
