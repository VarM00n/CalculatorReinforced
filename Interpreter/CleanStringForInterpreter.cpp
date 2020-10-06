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
    bool validBrackets = true;
    for (char i : this->operation) {
        if (i == 40 || i == 41) {
            validBrackets = !validBrackets;
        }
    }
    this->validInput = validBrackets;
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
    checkLastChar();
}

int CleanStringForInterpreter::combinationOfOperations(int i) {
    for(int j = 0; j < 8; j++){
        if(this->getOperation().size() > i && this->getOperation()[i] == tableOfOperations[j][0]
           && this->getOperation()[i+1] == tableOfOperations[j][1] ){
            this->setOperation(this->getOperation().substr(0, (unsigned long) i) + tableOfOperations[j][2] +
                               this->getOperation().substr((unsigned long) i + 2, this->getOperation().size() - 1));
            if(tableOfOperations[j][3] == '1'){
                validInput = false;
            }
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

void CleanStringForInterpreter::checkLastChar() {
    while(!(((char(this->getOperation()[this->getOperation().size() - 1]) >=48 && char(this->getOperation()[this->getOperation().size() - 1]) <=57)) || char(this->getOperation()[0]) == 45) && !this->getOperation().empty()) {
        char  result = char(this->getOperation()[this->getOperation().size() - 1]);
        if (char(this->getOperation()[this->getOperation().size() - 1]) != ')') {
            //TODO obsługa błędu inputu
            this->validInput = false;
            break;
        }
        else{
            break;
        }
    }
}

void CleanStringForInterpreter::parseString() {
    string singleParsedNumber;
    bool flagForNumber = false;
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
                flagForNumber = true;
            }
        }else if(this->getOperation()[0] == '('){
            bool flagForDigitBeforBracket = false;
            if(flagForNumber) {
                stringAfterParsing.emplace_back("*");
                singleParsedNumber = this->getOperation()[0];
                stringAfterParsing.push_back(singleParsedNumber);
                this->setOperation(this->getOperation().substr(1, this->getOperation().size()-1));
                singleParsedNumber = "";
                flagForNumber = false;
                flagForDigitBeforBracket = true;
            }
            if(this->getOperation()[0] == '-' && this->getOperation().size() > 1 && flagForDigitBeforBracket){
                singleParsedNumber = "-";
                this->setOperation(this->getOperation().substr(1, this->getOperation().size()-1));
            }
            else if(this->getOperation()[1] == '-' && this->getOperation().size() > 1){
                stringAfterParsing.emplace_back("(");
                this->setOperation(this->getOperation().substr(1, this->getOperation().size()-1));
                singleParsedNumber = "-";
                this->setOperation(this->getOperation().substr(1, this->getOperation().size()-1));
            } else if(stringAfterParsing.empty()){
                singleParsedNumber = this->getOperation()[0];
                stringAfterParsing.push_back(singleParsedNumber);
                this->setOperation(this->getOperation().substr(1, this->getOperation().size()-1));
                singleParsedNumber = "";
                flagForNumber = false;
            } else{
                this->validInput = false;
            }
        }
        else if(this->getOperation()[0] == ')'){
            if(!flagForNumber){
                this->validInput = false;
                singleParsedNumber = this->getOperation()[0];
                stringAfterParsing.push_back(singleParsedNumber);
                this->setOperation(this->getOperation().substr(1, this->getOperation().size()-1));
                singleParsedNumber = "";
                flagForNumber = false;
            }
            else{
                singleParsedNumber = this->getOperation()[0];
                stringAfterParsing.push_back(singleParsedNumber);
                this->setOperation(this->getOperation().substr(1, this->getOperation().size()-1));
                singleParsedNumber = "";
                flagForNumber = false;
            }
            if(!this->getOperation().empty() && isNumber(this->getOperation()[0])){
                this->stringAfterParsing.emplace_back("*");
                singleParsedNumber = this->getOperation()[0];
                stringAfterParsing.push_back(singleParsedNumber);
                this->setOperation(this->getOperation().substr(1, this->getOperation().size()-1));
                singleParsedNumber = "";
                flagForNumber = false;
            }
        }
        else{
            singleParsedNumber = this->getOperation()[0];
            stringAfterParsing.push_back(singleParsedNumber);
            this->setOperation(this->getOperation().substr(1, this->getOperation().size()-1));
            singleParsedNumber = "";
            flagForNumber = false;
        }
    }
}

bool CleanStringForInterpreter::isNumber(string character) {
    for (char i : character) {
        if(i >= 48 && i <= 57){
            return true;
        }
    }
    return false;
}

bool CleanStringForInterpreter::isNumber(char character) {
    string characterS;
    characterS += character;
    for (char i : characterS) {
        if(i >= 48 && i <= 57){
            return true;
        }
    }
    return false;
}


