//
// Created by VarMoon on 05.10.2020.
//

#include "CleanStringForInterpreter.h"
#include <string>


void CleanStringForInterpreter::cleanString() {
    careOfSpaces();
    careOfBrackets();
    numberValidation();
    careOfSigns();
}

void CleanStringForInterpreter::careOfSpaces() {
    long size = this->operation.size();
    for(int i = 0; i < size; i++){
        if(i - 1 >= 0 && i + 1 <= this->getOperation().size() && this->getOperation()[i] == ' '){
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
    if(this->getOperation().empty()){
        this->validInput = false;
    }
}

void CleanStringForInterpreter::careOfBrackets() {
    for (char i : this->operation) {
        if (i == 40 || i == 41) {
            validInput = !validInput;
        }
    }
}

void CleanStringForInterpreter::numberValidation() {
    for (char i : this->operation) {
        if (!checkIfValidChar(i)) {
            validInput = false;
        }
    }
    if(this->getOperation().empty()){
        validInput = false;
    }
}

bool CleanStringForInterpreter::checkIfValidChar(char character) {
    return (character >= 48 && character <= 57) || character == 46 || character == 40 || character == 41 || character == 47
           || character == 43 || character == 45 || character == 42;
}

void CleanStringForInterpreter::careOfSigns() {
    for (int i = 0 ; i < this->getOperation().size(); i++){
        i = combinationOfOperations(i);
    }
    checkFirstChar();
}

int CleanStringForInterpreter::combinationOfOperations(int i) {
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

void CleanStringForInterpreter::checkFirstChar() {
    while(!(((char(this->getOperation()[0]) >=48 && char(this->getOperation()[0]) <=57)) || char(this->getOperation()[0]) == 45) && !this->getOperation().empty()) {
        if (this->getOperation()[0] == '+' || this->getOperation()[0] == '*' || this->getOperation()[0] == '/' || this->getOperation()[0] == ')') {
            //TODO obsługa błędu inputu
            this->validInput = false;
            break;
        }
        if(this->getOperation()[0] == '('){
            break;
        }
    }
}

void CleanStringForInterpreter::parseString() {
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


