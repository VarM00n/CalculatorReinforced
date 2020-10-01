#include <iostream>
#include <string.h>
#include <Subtraction.h>
#include "Number/Number.h"
#include "Addition/Addition.h"
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
//-523457619026345.54", "-4891238746.52345", "-523452727787599.01655
int main(int argc, char **argv) {

    Number number1("-523457619026345.54");
    Number number2("-4891238746.52345");
    Subtraction subtraction(number1, number2);
    Addition addition(number1, number2);
//    cout << addition.additionFinal().getValue();
    cout << subtraction.subtractionFinal().getValue();
    return 0;
}