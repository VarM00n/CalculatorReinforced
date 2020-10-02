#include <iostream>
#include <string.h>
//#include <Subtraction.h>
#include "Number/Number.h"
#include "Addition/Addition.h"
#include "Subtraction/Subtraction.h"
#include "Multiplication/Multiplication.h"
#include "Division/Division.h"
//#include "Number/Number.h"
//#include "Number.h"
//#include "Addition/Addition.h"
//#include <Number.h>
//#include <Addition.h>
//#include <Subtraction.h>
//#include <Multiplication.h>
//#include <Division.h>
//#include <Number.h>
//#include <Addition.h>

using namespace std;
//int argc, char **argv
//-652345.26445", "23462345
int main(int argc, char **argv) {

    Number number1("-652345.26445");
    Number number2("23462345");
//    Subtraction subtraction(number1, number2);
//    Addition addition(number1, number2);
//    Multiplication multiplication(number1, number2);
    Division division(number1, number2);
    cout << division.divisionFinal().getValue();
//    cout << multiplication.multiplicationFinal().getValue();
//    cout << addition.additionFinal().getValue();
//    cout << subtraction.subtractionFinal().getValue();
//    Number number23("00000000000372");
//    number23.setFloating(true);
//    number23.setFloatingPos(4);
//    number23.prepareNumberForOutput();
//    cout << number23.getValue();
    return 0;
}