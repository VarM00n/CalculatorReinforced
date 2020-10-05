//
// Created by VarMoon on 05.10.2020.
//

#ifndef CALCULATORREINFORED_INTERPRETERFORSTRING_H
#define CALCULATORREINFORED_INTERPRETERFORSTRING_H

#include <string>

class InterpreterForString {
    std::string operation;
    bool validInput = true;

private:
    void cleanString();
    void careOfSpaces();
    void careOfBrackets();
    void numberValidation();
    bool checkIfValidChar(char character);
    void careOfSigns();
    int twoMinusesNextTo(int i);
    int twoPlusesNextTo(int i);
    int minusAnsPlusNextTo(int i);
    void checkFirstChar();

public:
    void setOperation(const std::string &operation);

public:
    explicit InterpreterForString(const std::string &operation);
    const std::string &getOperation() const;
    bool isValidInput() const;
    void stringOperation();


};


#endif //CALCULATORREINFORED_INTERPRETERFORSTRING_H
