#include <iostream>
#include <string.h>
#include "Number/Number.h"
#include "Addition/Addition.h"
#include "Subtraction/Subtraction.h"
#include "Multiplication/Multiplication.h"
#include "Division/Division.h"


using namespace std;

//-82885771569.744 - -84399829734.5593
//"84399829734.5593"
//-80579143174.9364 - -57706637200.4904
int main(int argc, char **argv) {

    Number number1(argv[1]);
    Number number2(argv[2]);

//    Number number1("-80579143174.9364");
//    Number number2("-57706637200.4904");

    Addition addition(number1, number2);
    cout << addition.additionFinal().getValue();

//    Subtraction subtraction(number1, number2);
//    cout << subtraction.subtractionFinal().getValue();
//    if(argv[3] == "+"){
//        Addition addition(number1, number2);
//        cout << argv[3];
//        cout << addition.additionFinal().getValue();
//    }
//    else if(argv[3] == "-"){
//        Subtraction subtraction(number1, number2);
//        cout << subtraction.subtractionFinal().getValue();
//    }
//    else if(argv[3] == "*"){
//        Multiplication multiplication(number1, number2);
//        cout << multiplication.multiplicationFinal().getValue();
//    }
//    else if(argv[3] == "/"){
//        Division division(number1, number2);
//        cout << division.divisionFinal().getValue();
//    }

    return 0;
}