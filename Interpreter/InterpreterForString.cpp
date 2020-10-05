//
// Created by VarMoon on 05.10.2020.
//

#include "InterpreterForString.h"
#include <iostream>
#include <string>

using namespace std;

//Constructors
InterpreterForString::InterpreterForString(const string &operation) : operation(operation) {}

//Getters
const string &InterpreterForString::getOperation() const {
    return operation;
}

bool InterpreterForString::isValidInput() const {
    return validInput;
}

//Methods
void InterpreterForString::stringOperation(){
    cleanString();
}

void InterpreterForString::cleanString(){
    careOfSpaces();
    careOfBrackets();
    numberValidation();
    careOfSigns();
}

void InterpreterForString::careOfSpaces(){
    string output;
    output.reserve(this->operation.size());
    for (char i : this->operation) {
        if (i != 32) {
            output += i;
        }
    }
    this->operation = output;
}

void InterpreterForString::careOfBrackets() {
    for (char i : this->operation) {
        if (i == 40 || i == 41) {
            validInput = !validInput;
        }
    }
}

void InterpreterForString::numberValidation(){
    for (char i : this->operation) {
        if (!checkIfValidChar(i)) {
            validInput = false;
        }
    }
}

void InterpreterForString::careOfSigns(){
    for (int i = 0 ; i < this->getOperation().size(); i++){
        i = twoMinusesNextTo(i);
        i = twoPlusesNextTo(i);
        i = minusAnsPlusNextTo(i);
    }
    checkFirstChar();
}

int InterpreterForString::twoMinusesNextTo(int i){
    if(this->getOperation().size() > i && this->getOperation()[i] == '-' && this->getOperation()[i+1] == '-'){
        this->setOperation(this->getOperation().substr(0, (unsigned long) i) + "+" +
        this->getOperation().substr((unsigned long) i + 2, this->getOperation().size() - 1));
        i--;
    }
    return i;
}

int InterpreterForString::twoPlusesNextTo(int i){
    if(this->getOperation().size() > i && this->getOperation()[i] == '+' && this->getOperation()[i+1] == '+'){
        this->setOperation(this->getOperation().substr(0, (unsigned long) i) + "+" +
                           this->getOperation().substr((unsigned long) i + 2, this->getOperation().size() - 1));
        i--;
    }
    return i;
}

int InterpreterForString::minusAnsPlusNextTo(int i){
    if((this->getOperation().size() > i && this->getOperation()[i] == '-' && this->getOperation()[i+1] == '+') ||
            (this->getOperation().size() > i && this->getOperation()[i] == '+' && this->getOperation()[i+1] == '-')){
        this->setOperation(this->getOperation().substr(0, (unsigned long) i) + "-" +
                           this->getOperation().substr((unsigned long) i + 2, this->getOperation().size() - 1));
        i--;
    }
    return i;
}

void InterpreterForString::checkFirstChar(){
    if(this->getOperation()[0] == '+' || this->getOperation()[0] == '*' || this->getOperation()[0] == '/'){
        //TODO obsługa błędu inputu
        this->setOperation(this->getOperation().substr(1, this->getOperation().size() - 1));
    }
}

bool InterpreterForString::checkIfValidChar(char character){
    return (character >= 48 && character <= 57) || character == 46 || character == 40 || character == 41 || character == 47
    || character == 43 || character == 45 || character == 42;
}

void InterpreterForString::setOperation(const string &operation) {
    InterpreterForString::operation = operation;
}


