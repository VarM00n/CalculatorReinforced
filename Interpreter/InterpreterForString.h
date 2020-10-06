//
// Created by VarMoon on 05.10.2020.
//

#ifndef CALCULATORREINFORED_INTERPRETERFORSTRING_H
#define CALCULATORREINFORED_INTERPRETERFORSTRING_H

#include <string>
#include <list>
#include <stack>
#include <iostream>

#include "CleanStringForInterpreter.h"
#include "InterpreterCore.h"
#include "RPN.h"

using namespace std;

class InterpreterForString: public RPN {

public:
    explicit InterpreterForString(const string &operation);
    string stringOperation();

    };


#endif //CALCULATORREINFORED_INTERPRETERFORSTRING_H
