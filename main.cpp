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
int main(int argc, char **argv) {

    Number number1("-12348651623");
    Number number2("23456.23");
    Subtraction subtraction(number1, number2);
    cout << subtraction.preSubtract().getValue() << endl;
    return 0;
}