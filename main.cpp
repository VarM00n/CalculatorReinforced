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
    Subtraction subtraction(numberA, numberB);
//    cout << subtraction.subtractionInt().getValue();
//    cout << subtraction.subtractionFloat().getValue();
    cout << subtraction.preSubtract().getValue();
//    Addition addition(numberA, numberB);
//    cout << addition.additionFinal().getValue();
//    cout << addition.additionInt().getValue();
//    Multiplication multiplication(numberA, numberB);
//    multiplication.multiplicationInt();
//    Division division(numberA, numberB);
//    cout << division.divisionInt().getValue();

    return 0;
}