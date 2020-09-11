#include <iostream>
#include <Number.h>
#include <AdditionOperation.h>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    Number numberA(a);
    Number numberB(b);
    AdditionOperation::additionOperation(numberA, numberB);
    return 0;
}