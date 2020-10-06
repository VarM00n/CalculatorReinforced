//
// Created by VarMoon on 05.10.2020.
//

#ifndef CALCULATORREINFORED_INTERPRETERFORSTRING_H
#define CALCULATORREINFORED_INTERPRETERFORSTRING_H

#include <string>
#include <list>
#include <stack>
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
    string ONP;
    list<string> stringAfterParsing;
    string stringOperation();
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
    void createONP();
    bool isNumber(string character);
    bool isOpenBracket(string character);
    bool isClosingBracket(string character);
    bool checkPriority(string firstChar, string secondChar);
    int getPriority(string character);
    string calculateONP();
    };


#endif //CALCULATORREINFORED_INTERPRETERFORSTRING_H
