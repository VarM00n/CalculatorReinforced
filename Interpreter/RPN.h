//
// Created by VarMoon on 06.10.2020.
//

#ifndef CALCULATORREINFORED_RPN_H
#define CALCULATORREINFORED_RPN_H

#include "CleanStringForInterpreter.h"

class RPN: public CleanStringForInterpreter {
public:
    void createONP();
    bool isNumber(string character);
    bool isOpenBracket(string character);
    bool isClosingBracket(string character);
    bool checkPriority(string firstChar, string secondChar);
    int getPriority(string character);
    string calculateONP();
};


#endif //CALCULATORREINFORED_RPN_H
