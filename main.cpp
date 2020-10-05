#include <iostream>
#include <string.h>
#include "Number/Number.h"
#include "Addition/Addition.h"
#include "Subtraction/Subtraction.h"
#include "Multiplication/Multiplication.h"
#include "Division/Division.h"
#include "Interpreter/InterpreterForString.h"


using namespace std;

int main(int argc, char **argv) {
    InterpreterForString interpreterForString("51234.5 - 123666.111");
    interpreterForString.stringOperation();
    cout << interpreterForString.getOperation();

    return 0;
}