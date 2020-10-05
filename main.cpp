#include <iostream>
#include <string.h>
#include "Number/Number.h"
#include "Addition/Addition.h"
#include "Subtraction/Subtraction.h"
#include "Multiplication/Multiplication.h"
#include "Division/Division.h"


using namespace std;

int main(int argc, char **argv) {

    Number number1(argv[1]);
    Number number2(argv[2]);

//    Number number1("1");
//    Number number2("3");

//    Addition addition(number1, number2);
//    cout << addition.additionFinal().getValue();

//    Subtraction subtraction(number1, number2);
//    cout << subtraction.subtractionFinal().getValue();

//    Multiplication multiplication(number1, number2);
//    cout << multiplication.multiplicationFinal().getValue();

    Division division(number1, number2);
    cout << division.divisionFinal().getValue();


    return 0;
}