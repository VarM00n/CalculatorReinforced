//
// Created by VarMoon on 06.10.2020.
//

#include "RPN.h"

#include "../Number/Number.h"

#include "../Addition/Addition.h"
#include "../Subtraction/Subtraction.h"
#include "../Multiplication/Multiplication.h"
#include "../Division/Division.h"

void RPN::createONP() {
    for(string i : this->stringAfterParsing){
        if(isNumber(i)){
            this->ONP += i + " ";
        }
        else if(isOpenBracket(i)){
            this->stackForONP.push(i);
        }
        else if(isClosingBracket(i)){
            string valueForStack;
            string characterForStack = this->stackForONP.top();
            this->stackForONP.pop();
            while(!isOpenBracket(characterForStack)){
                valueForStack += characterForStack + " ";
                characterForStack = this->stackForONP.top();
                this->stackForONP.pop();
            }
            this->ONP += valueForStack;
        }
        else {
            if(stackForONP.empty() || checkPriority(i, this->stackForONP.top())){
                stackForONP.push(i);
            }
            else {
                while (!checkPriority(i, this->stackForONP.top())) {
                    this->ONP += this->stackForONP.top() + " ";
                    this->stackForONP.pop();
                    if(this->stackForONP.empty()){
                        break;
                    }
                }
                this->stackForONP.push(i);
            }
        }
    }
    while(!this->stackForONP.empty()){
        this->ONP += this->stackForONP.top() + " ";
        this->stackForONP.pop();
    }
    this->ONP = this->ONP.substr(0, this->ONP.size() - 1);
}

bool RPN::isNumber(string character) {
    for (char i : character) {
        if(i >= 48 && i <= 57){
            return true;
        }
    }
    return false;
}

bool RPN::isOpenBracket(string character) {
    return character == "(";
}

bool RPN::isClosingBracket(string character) {
    return character == ")";
}

bool RPN::checkPriority(string firstChar, string secondChar) {
    int priorityForFirstChar = this->getPriority(std::move(firstChar));
    int priorityForSecondChar = this->getPriority(std::move(secondChar));
    return priorityForFirstChar > priorityForSecondChar;
}

int RPN::getPriority(string character) {
    for (auto &operand : this->operands) {
        if(character[0] == operand[0]){
            return int(operand[1] - '0');
        }
    }
    return false;
}

string RPN::calculateONP() {
    string character;
    string firstString;
    string secondString;
    while(!ONP.empty()){
        character = ONP.substr(0, ONP.find(' '));
        ONP = ONP.substr(ONP.find(' ') + 1, ONP.size() - 1);
        if(isNumber(character)){
            calculatingONP.push(character);
        }
        else{
            firstString = calculatingONP.top();
            calculatingONP.pop();
            secondString = calculatingONP.top();
            calculatingONP.pop();
            if(character == "+"){
                Number firstNumber(firstString);
                Number secondNumber(secondString);
                calculatingONP.push(Addition (secondNumber, firstNumber).additionFinal().getValue());
            }
            if(character == "-"){
                Number firstNumber(firstString);
                Number secondNumber(secondString);
                calculatingONP.push(Subtraction (secondNumber, firstNumber).subtractionFinal().getValue());
            }
            if(character == "*"){
                Number firstNumber(firstString);
                Number secondNumber(secondString);
                calculatingONP.push(Multiplication (secondNumber, firstNumber).multiplicationFinal().getValue());
            }
            if(character == "/"){
                Number firstNumber(firstString);
                Number secondNumber(secondString);
                calculatingONP.push(Division (secondNumber, firstNumber).divisionFinal().getValue());
            }
        }
    }
    if(calculatingONP.empty()){
        return "0";
    }
    else {
        return calculatingONP.top();
    }
}
