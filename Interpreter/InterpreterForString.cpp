//
// Created by VarMoon on 05.10.2020.
//

#include "InterpreterForString.h"
#include <iostream>
#include <string>

using namespace std;

//Constructor
InterpreterForString::InterpreterForString(const string &operation) : operation(operation) {}


//Setter&Getter
std::string InterpreterForString::getOperation(){
    return operation;
}

void InterpreterForString::setOperation(std::string operation) {
    this->operation = operation;
}

bool InterpreterForString::isValidInput() const {
    return validInput;
}


//Methods
void InterpreterForString::stringOperation(){
    cleanString();
    if(!this->isValidInput()){
        cout << "-1";
    }
    else {
        parseString();
    }
}

void InterpreterForString::cleanString(){
    careOfSpaces();
    careOfBrackets();
    numberValidation();
    careOfSigns();
}

void InterpreterForString::careOfSpaces(){
    long size = this->operation.size();
    for(int i = 0; i < size; i++){
        if(i - 1 > 0 && i + 1 < this->getOperation().size() && this->getOperation()[i] == ' '){
            char firstChar = char(this->getOperation()[i - 1]);
            char secondChar = char(this->getOperation()[i + 1]);
            if((firstChar >= 48 && firstChar <= 57) && (secondChar >= 48 && secondChar <= 57)) {
                validInput = false;
            }
        }
        if(this->getOperation()[i] == ' ') {
            this->setOperation(this->getOperation().substr(0, (unsigned long)(i)) +
                               this->getOperation().substr((unsigned long)i + 1, this->getOperation().size()));
            i--;
        }
    }
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

bool InterpreterForString::checkIfValidChar(char character){
    return (character >= 48 && character <= 57) || character == 46 || character == 40 || character == 41 || character == 47
           || character == 43 || character == 45 || character == 42;
}

void InterpreterForString::careOfSigns(){
    for (int i = 0 ; i < this->getOperation().size(); i++){
        i = combinationOfOperations(i);
    }
    checkFirstChar();
}

void InterpreterForString::checkFirstChar(){
    while(!(((char(this->getOperation()[0]) >=48 && char(this->getOperation()[0]) <=57)) || char(this->getOperation()[0]) == 45)) {
        if (this->getOperation()[0] == '+' || this->getOperation()[0] == '*' || this->getOperation()[0] == '/') {
            //TODO obsługa błędu inputu
            this->setOperation(this->getOperation().substr(1, this->getOperation().size() - 1));
        }
    }
}

int InterpreterForString::combinationOfOperations(int i){
    for(int j = 0; j < 8; j++){
        if(this->getOperation().size() > i && this->getOperation()[i] == tableOfOperations[j][0]
           && this->getOperation()[i+1] == tableOfOperations[j][1] ){
            this->setOperation(this->getOperation().substr(0, (unsigned long) i) + tableOfOperations[j][2] +
                               this->getOperation().substr((unsigned long) i + 2, this->getOperation().size() - 1));
            i--;
        }
    }
    return i;
}

void InterpreterForString::parseString(){
    string singleParsedNumber;
    if(this->getOperation()[0] == '-'){
        this->setOperation(this->getOperation().substr(1, this->getOperation().size()-1));
        singleParsedNumber = "-";
    } else{
        singleParsedNumber = "";
    }
    while(!this->getOperation().empty()){
        if((char(this->getOperation()[0]) >=48 && char(this->getOperation()[0]) <=57) || char(this->getOperation()[0]) == 46){
            singleParsedNumber += this->getOperation()[0];
            this->setOperation(this->getOperation().substr(1, this->getOperation().size()-1));
            if(!((char(this->getOperation()[0]) >=48 && char(this->getOperation()[0] <=57)) || char(this->getOperation()[0]) == 46)){
                stringAfterParsing.push_back(singleParsedNumber);
                singleParsedNumber = "";
            }
        } else{
            singleParsedNumber = this->getOperation()[0];
            stringAfterParsing.push_back(singleParsedNumber);
            this->setOperation(this->getOperation().substr(1, this->getOperation().size()-1));
            singleParsedNumber = "";
        }
    }
}