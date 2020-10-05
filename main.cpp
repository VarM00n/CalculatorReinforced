#include <iostream>
#include <string.h>
#include "Number/Number.h"
#include "Addition/Addition.h"
#include "Subtraction/Subtraction.h"
#include "Multiplication/Multiplication.h"
#include "Division/Division.h"
#include "Interpreter/InterpreterForString.h"


using namespace std;

void print(list<string> const &list1){
    for(auto const& i: list1){
        cout << i << endl;
    }
}


int main(int argc, char **argv) {
    InterpreterForString interpreterForString("12 * (461 - 16 -(15 + 25))");
    interpreterForString.stringOperation();
    print(interpreterForString.stringAfterParsing);
//    cout << interpreterForString.getOperation();

    return 0;
}