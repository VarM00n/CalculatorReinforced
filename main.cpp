#include <iostream>
#include <Number.h>
#include <Addition.h>
#include <Subtraction.h>
#include <Multiplication.h>
#include <Division.h>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    Number numberA(a);
    Number numberB(b);
//    Subtraction subtraction(numberA, numberB);
//    subtraction.subtractionInt();
//    Addition addition(numberA, numberB);
//    addition.additionInt();
//    Multiplication multiplication(numberA, numberB);
//    multiplication.multiplicationInt();
    Division division(numberA, numberB);
    cout << division.divisionInt().getValue();

    return 0;
}