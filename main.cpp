#include <iostream>
#include <string.h>
//#include <Subtraction.h>
#include "Number/Number.h"
#include "Addition/Addition.h"
//#include "Multiplication/Multiplication.h"
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
//63456456", "5234572734574
int main(int argc, char **argv) {

    Number number1(argv[1]);
    Number number2(argv[2]);
//    Subtraction subtraction(number1, number2);
    Addition addition(number1, number2);
//    Multiplication multiplication(number1, number2);
//    cout << multiplication.multiplicationFinal().getValue();
    cout << addition.additionFinal().getValue();
//    cout << subtraction.subtractionFinal().getValue();
    return 0;
}