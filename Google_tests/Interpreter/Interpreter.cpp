//
// Created by VarMoon on 05.10.2020.
//

#include "gtest/gtest.h"
#include "../../Interpreter/InterpreterForString.h"
#include "../../Interpreter/RPN.h"
#include "../../Interpreter/CleanStringForInterpreter.h"

TEST (CleanStringForInterpreter_careOfSpaces, AllCases){
    InterpreterForString interpreterForString0(" 2 + 2 ");
    interpreterForString0.careOfSpaces();
    EXPECT_EQ("2+2", interpreterForString0.getOperation());
    EXPECT_EQ(true, interpreterForString0.isValidInput());


    InterpreterForString interpreterForString1("      ");
    interpreterForString1.careOfSpaces();
    EXPECT_EQ("", interpreterForString1.getOperation());
    EXPECT_EQ(false, interpreterForString1.isValidInput());

    InterpreterForString interpreterForString2("2 k+ 2");
    interpreterForString2.careOfSpaces();
    EXPECT_EQ("2k+2", interpreterForString2.getOperation());
    EXPECT_EQ(true, interpreterForString2.isValidInput());

    InterpreterForString interpreterForString3("2  2");
    interpreterForString3.careOfSpaces();
    EXPECT_EQ("22", interpreterForString3.getOperation());
    EXPECT_EQ(false, interpreterForString3.isValidInput());

    InterpreterForString interpreterForString4("2 + (-5 + 2)");
    interpreterForString4.careOfSpaces();
    EXPECT_EQ("2+(-5+2)", interpreterForString4.getOperation());
    EXPECT_EQ(true, interpreterForString4.isValidInput());
}

TEST (CleanStringForInterpreter_careOfBrackets, AllCases){
    InterpreterForString interpreterForString0("2+2");
    interpreterForString0.careOfBrackets();
    EXPECT_EQ("2+2", interpreterForString0.getOperation());
    EXPECT_EQ(true, interpreterForString0.isValidInput());


    InterpreterForString interpreterForString1("2+(-5+2)");
    interpreterForString1.careOfBrackets();
    EXPECT_EQ("2+(-5+2)", interpreterForString1.getOperation());
    EXPECT_EQ(true, interpreterForString1.isValidInput());

    InterpreterForString interpreterForString2("2-(51+5))/2");
    interpreterForString2.careOfBrackets();
    EXPECT_EQ("2-(51+5))/2", interpreterForString2.getOperation());
    EXPECT_EQ(false, interpreterForString2.isValidInput());
}

TEST (CleanStringForInterpreter_numberValidation, AllCases){
    InterpreterForString interpreterForString0("2+2");
    interpreterForString0.numberValidation();
    EXPECT_EQ("2+2", interpreterForString0.getOperation());
    EXPECT_EQ(true, interpreterForString0.isValidInput());


    InterpreterForString interpreterForString1("24a-5");
    interpreterForString1.numberValidation();
    EXPECT_EQ("24a-5", interpreterForString1.getOperation());
    EXPECT_EQ(false, interpreterForString1.isValidInput());

    InterpreterForString interpreterForString2("15-26*");
    interpreterForString2.numberValidation();
    EXPECT_EQ("15-26*", interpreterForString2.getOperation());
    EXPECT_EQ(true, interpreterForString2.isValidInput());

    InterpreterForString interpreterForString3("2-(51+5))/2");
    interpreterForString3.numberValidation();
    EXPECT_EQ("2-(51+5))/2", interpreterForString3.getOperation());
    EXPECT_EQ(true, interpreterForString3.isValidInput());
}

TEST (CleanStringForInterpreter_careOfSigns, AllCases){
    InterpreterForString interpreterForString0("2++2");
    interpreterForString0.careOfSigns();
    EXPECT_EQ("2+2", interpreterForString0.getOperation());
    EXPECT_EQ(false, interpreterForString0.isValidInput());

    InterpreterForString interpreterForString1("24+-5");
    interpreterForString1.careOfSigns();
    EXPECT_EQ("24-5", interpreterForString1.getOperation());
    EXPECT_EQ(true, interpreterForString1.isValidInput());

    InterpreterForString interpreterForString2("2+(-5+2)");
    interpreterForString2.careOfSigns();
    EXPECT_EQ("2+(-5+2)", interpreterForString2.getOperation());
    EXPECT_EQ(true, interpreterForString2.isValidInput());

    InterpreterForString interpreterForString3("*2-(51+5))/2");
    interpreterForString3.careOfSigns();
    EXPECT_EQ("*2-(51+5))/2", interpreterForString3.getOperation());
    EXPECT_EQ(false, interpreterForString3.isValidInput());

    InterpreterForString interpreterForString4("-2-(51+5))/2");
    interpreterForString4.careOfSigns();
    EXPECT_EQ("-2-(51+5))/2", interpreterForString4.getOperation());
    EXPECT_EQ(true, interpreterForString4.isValidInput());

    InterpreterForString interpreterForString5("2-(51+5))/2/");
    interpreterForString5.careOfSigns();
    EXPECT_EQ("2-(51+5))/2/", interpreterForString5.getOperation());
    EXPECT_EQ(false, interpreterForString5.isValidInput());
}

TEST(CleanStringForInterpreter_parseString, AllPossibilities){
    InterpreterForString interpreterForString0("2++2");
    interpreterForString0.parseString();
    EXPECT_EQ("2+2", interpreterForString0.getOperation());
    EXPECT_EQ(false, interpreterForString0.isValidInput());

    InterpreterForString interpreterForString1("24+-5");
    interpreterForString1.careOfSigns();
    EXPECT_EQ("24-5", interpreterForString1.getOperation());
    EXPECT_EQ(true, interpreterForString1.isValidInput());

    InterpreterForString interpreterForString2("2+(-5+2)");
    interpreterForString2.careOfSigns();
    EXPECT_EQ("2+(-5+2)", interpreterForString2.getOperation());
    EXPECT_EQ(true, interpreterForString2.isValidInput());

    InterpreterForString interpreterForString3("*2-(51+5))/2");
    interpreterForString3.careOfSigns();
    EXPECT_EQ("*2-(51+5))/2", interpreterForString3.getOperation());
    EXPECT_EQ(false, interpreterForString3.isValidInput());

    InterpreterForString interpreterForString4("-2-(51+5))/2");
    interpreterForString4.careOfSigns();
    EXPECT_EQ("-2-(51+5))/2", interpreterForString4.getOperation());
    EXPECT_EQ(true, interpreterForString4.isValidInput());

    InterpreterForString interpreterForString5("2-(51+5))/2/");
    interpreterForString5.careOfSigns();
    EXPECT_EQ("2-(51+5))/2/", interpreterForString5.getOperation());
    EXPECT_EQ(false, interpreterForString5.isValidInput());
}

