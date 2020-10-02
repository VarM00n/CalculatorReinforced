#include <iostream>
#include <string.h>
//#include <Subtraction.h>
#include "Number/Number.h"
#include "Addition/Addition.h"
#include "Subtraction/Subtraction.h"
#include "Multiplication/Multiplication.h"
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
//8752876365", "234852384756234652.72
int main(int argc, char **argv) {

    Number number1("8752876365");
    Number number2("234852384756234652.72");
//    Subtraction subtraction(number1, number2);
//    Addition addition(number1, number2);
    Multiplication multiplication(number1, number2);
    cout << multiplication.multiplicationFinal().getValue();
//    cout << addition.additionFinal().getValue();
//    cout << subtraction.subtractionFinal().getValue();
//    Number number1("2055633887796732578186870962.80");
//    number1.prepareNumberForOutput();
//    cout << number1.getValue();
    return 0;
}