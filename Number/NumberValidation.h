//
// Created by VarMoon on 24.09.2020.
//

#ifndef CALCULATORREINFORED_ZEROSHANDLING_H
#define CALCULATORREINFORED_ZEROSHANDLING_H

#include "string"
#include "NumberCore.h"

using namespace std;

class NumberValidation : public NumberCore {

public:
    void removeTrailingZeros();
    void caseWhereZerosAtTheBeginning();
    void caseWhereNumberEmpty();
    bool preparedFloat();
    bool preparedSign();
    void prepareNumberForOutput();
    };


#endif //CALCULATORREINFORED_ZEROSHANDLING_H
