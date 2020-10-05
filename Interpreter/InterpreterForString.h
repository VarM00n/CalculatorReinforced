//
// Created by VarMoon on 05.10.2020.
//

#ifndef CALCULATORREINFORED_INTERPRETERFORSTRING_H
#define CALCULATORREINFORED_INTERPRETERFORSTRING_H

#include <string>

class InterpreterForString {
private:
    std::string operation;
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
    void stringOperation();
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
    explicit InterpreterForString(const std::string &operation);


};


#endif //CALCULATORREINFORED_INTERPRETERFORSTRING_H
