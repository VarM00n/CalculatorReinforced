#include <iostream>
//#include "Number/Number.h"
//#include "Addition/Addition.h"
//#include "Number/Number.h"
//#include "Number.h"
//#include "Addition/Addition.h"
//#include <Number.h>
//#include <Addition.h>
//#include <Subtraction.h>
//#include <Multiplication.h>
//#include <Division.h>
#include <Number.h>
#include <Addition.h>

using namespace std;

int main() {
    string a;
    string b;
    cin >> a;
    cin >> b;

    Number number1(a);
    Number number2(b);
    Addition addition(number1, number2);
    cout << addition.additionFinal().getValue();

    return 0;
}