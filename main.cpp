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
    InterpreterForString interpreterForString2("(5+2)8");
    cout << interpreterForString2.stringOperation();
//    print(interpreterForString2.stringAfterParsing);


    return 0;
}