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
    InterpreterForString interpreterForString2("()");
    cout << interpreterForString2.stringOperation();
//    InterpreterForString interpreterForString2("(-2+4-)");
//    cout << interpreterForString2.stringOperation();
//    print(interpreterForString2.stringAfterParsing);


    return 0;
}