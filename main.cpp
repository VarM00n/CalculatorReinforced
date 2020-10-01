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
//"8523451236748465", "-529384561", "8523451766133026"
int main(int argc, char **argv) {

    Number number1("8523451236748465");
    Number number2("-529384561");
    Subtraction subtraction(number1, number2);
    cout << subtraction.subtractionFinal().getValue();
    return 0;
}