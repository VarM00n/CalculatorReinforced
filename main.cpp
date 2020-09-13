#include <iostream>
#include <Number.h>
#include <Addition.h>
#include <Subtraction.h>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    Number numberA(a);
    Number numberB(b);
    Subtraction subtraction(numberA, numberB);
//    subtraction.subtractionInt();
    Addition addition(numberA, numberB);
    addition.additionInt();

    return 0;
}