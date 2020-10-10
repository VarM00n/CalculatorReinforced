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
    InterpreterForString interpreterForString0("2+2");
    interpreterForString0.stringOperation();
    list <string> checkList0 = {"2", "+", "2"};
    EXPECT_EQ(checkList0, interpreterForString0.stringAfterParsing);


    InterpreterForString interpreterForString1("-2+2");
    interpreterForString1.stringOperation();
    list <string> checkList1 = {"-2", "+", "2"};
    EXPECT_EQ(checkList1, interpreterForString1.stringAfterParsing);

    InterpreterForString interpreterForString2("-2+4/6*-1");
    interpreterForString2.stringOperation();
    list <string> checkList2 = {"-2", "+", "4", "/", "6", "*", "-1"};
    EXPECT_EQ(checkList2, interpreterForString2.stringAfterParsing);

    InterpreterForString interpreterForString3("(-2+4)/(6*-1)");
    interpreterForString3.stringOperation();
    list <string> checkList3 = {"(", "-2", "+", "4", ")", "/", "(", "6", "*", "-1", ")"};
    EXPECT_EQ(checkList3, interpreterForString3.stringAfterParsing);

    InterpreterForString interpreterForString4("(2+4)");
    interpreterForString4.stringOperation();
    list <string> checkList4 = {"(", "2", "+", "4", ")"};
    EXPECT_EQ(checkList4, interpreterForString4.stringAfterParsing);

    InterpreterForString interpreterForString5("(-2+4)");
    interpreterForString5.stringOperation();
    list <string> checkList5 = {"(", "-2", "+", "4", ")"};
    EXPECT_EQ(checkList5, interpreterForString5.stringAfterParsing);

    InterpreterForString interpreterForString6("2(-5+2)");
    interpreterForString6.stringOperation();
    list <string> checkList6 = {"2", "*", "(", "-5", "+", "2", ")"};
    EXPECT_EQ(checkList6, interpreterForString6.stringAfterParsing);

    InterpreterForString interpreterForString7("-(-2+4)");
    interpreterForString7.stringOperation();
    list <string> checkList7 = {"-1", "*","(", "-2", "+", "4", ")"};
    EXPECT_EQ(checkList7, interpreterForString7.stringAfterParsing);

    InterpreterForString interpreterForString8("-((2/1)+4)");
    interpreterForString8.stringOperation();
    list <string> checkList8 = {"-1", "*", "(", "(", "2", "/", "1", ")", "+", "4", ")"};
    EXPECT_EQ(checkList8, interpreterForString8.stringAfterParsing);

    InterpreterForString interpreterForString9("()");
    interpreterForString9.stringOperation();
    list <string> checkList9 = {"(",")"};
    EXPECT_EQ(checkList9, interpreterForString9.stringAfterParsing);

    InterpreterForString interpreterForString10("(-(1+5)-5)");
    interpreterForString10.stringOperation();
    list <string> checkList10 = {"(", "-1", "*", "(", "1", "+", "5", ")", "-", "5", ")"};
    EXPECT_EQ(checkList10, interpreterForString10.stringAfterParsing);

    InterpreterForString interpreterForString11("-(-(1+5)-5)");
    interpreterForString11.stringOperation();
    list <string> checkList11 = {"-1", "*", "(", "-1", "*", "(", "1", "+", "5", ")", "-", "5", ")"};
    EXPECT_EQ(checkList11, interpreterForString11.stringAfterParsing);

    InterpreterForString interpreterForString12("8 + 32 / 16 ");
    interpreterForString12.stringOperation();
    list <string> checkList12 = {"8", "+", "32", "/", "16",};
    EXPECT_EQ(checkList12, interpreterForString12.stringAfterParsing);
}

