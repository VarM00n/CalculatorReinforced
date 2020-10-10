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
    for(int j = 0; j < 14; j++){
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

void CleanStringForInterpreter::addSpaces(){
    string space = " ";
    for (int i = 1; i < this->getOperation().size(); i++){
        if(!(char(this->getOperation()[i]) >=48 && char(this->getOperation()[i] <=57))){
            this->setOperation(this->operation.insert((unsigned long)i, space));
            i++;
        }
        else{
            if(i >= 1 && !(char(this->getOperation()[i-1]) >=48 && char(this->getOperation()[i-1] <=57))){
                this->setOperation(this->operation.insert((unsigned long)i, space));
                i++;
            }
        }
    }
    for (int i = int(this->getOperation().size()); i > 0; i--){
        if(i >= 4 && char(this->getOperation()[i]) >=48 && char(this->getOperation()[i] <=57) && char(this->getOperation()[i-2] == 45 && !(char(this->getOperation()[i-4]) >=48 && char(this->getOperation()[i-4] <=57)) && !char(this->getOperation()[i-4] == 41)) ){
            this->operation.erase((unsigned long)i-1, 1);
        }
    }
    for (int i = int(this->getOperation().size()); i > 0; i--){
        if(i >= 4 && char(this->getOperation()[i]) == 40 && char(this->getOperation()[i-2]) == 45 && (char(this->getOperation()[i-4]) == 43 || char(this->getOperation()[i-4]) == 42 || char(this->getOperation()[i-4]) == 47 || char(this->getOperation()[i-4]) == 40)){
            this->setOperation(this->operation.insert((unsigned long)i-1, "1 *"));
        }
    }
    if(char(this->getOperation()[0]) == 45 && char(this->getOperation()[2]) == 40 ){
        this->setOperation(this->operation.insert((unsigned long)2, "1 * "));
    }
    if(char(this->getOperation()[0]) == 45){
        this->operation.erase(1, 1);
    }
    for (int i = 0; i < this->getOperation().size(); i++){
        if( i >= 2 && char(this->getOperation()[i]) == 40 && ((char(this->getOperation()[i-2]) >=48 && char(this->getOperation()[i-2] <=57)) || char(this->getOperation()[i-2]) == 41)){
            this->setOperation(this->operation.insert((unsigned long)i-1, " *"));
            i++;
        }
    }
}

void CleanStringForInterpreter::parseString(){
    string singleParsedNumber;
    for(auto x : this->getOperation()){
        if(x == ' '){
            this->stringAfterParsing.push_back(singleParsedNumber);
            singleParsedNumber = "";
        }
        else{
            singleParsedNumber += x;
        }
    }
    this->stringAfterParsing.push_back(singleParsedNumber);
}

bool CleanStringForInterpreter::isNumber(string character) {
    for (char i : character) {
        if(i >= 48 && i <= 57){
            return true;
        }
    }
    return false;
}




