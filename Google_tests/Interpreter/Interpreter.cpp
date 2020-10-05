//
// Created by VarMoon on 05.10.2020.
//

#include "gtest/gtest.h"
#include "../../Interpreter/InterpreterForString.h"

//TEST(careOfSpaces, AllCases)
//{
//    InterpreterForString interpreterForString0("2 + 2");
//    interpreterForString0.stringOperation();
//    EXPECT_EQ("2+2", interpreterForString0.getOperation());
//
//    InterpreterForString interpreterForString1("12 + (14 - 6) + 15");
//    interpreterForString1.stringOperation();
//    EXPECT_EQ("12+(14-6)+15", interpreterForString1.getOperation());
//
//    InterpreterForString interpreterForString2("12 * 461 - 16 -(15 + 25)");
//    interpreterForString2.stringOperation();
//    EXPECT_EQ("12*461-16-(15+25)", interpreterForString2.getOperation());
//
//    InterpreterForString interpreterForString3("0 + 125 + - 1261 - ( 12)");
//    interpreterForString3.stringOperation();
//    EXPECT_EQ("0+125-1261-(12)", interpreterForString3.getOperation());
//}
//
//TEST(careOfBrackets, AllCases){
//    InterpreterForString interpreterForString0("2 + 2");
//    interpreterForString0.stringOperation();
//    EXPECT_EQ(true, interpreterForString0.isValidInput());
//
//    InterpreterForString interpreterForString1("12 + (14 - 6 + 15");
//    interpreterForString1.stringOperation();
//    EXPECT_EQ(false, interpreterForString1.isValidInput());
//
//    InterpreterForString interpreterForString2("12 * (461 - 16 -(15 + 25))");
//    interpreterForString2.stringOperation();
//    EXPECT_EQ(true, interpreterForString2.isValidInput());
//
//    InterpreterForString interpreterForString3("0 + ((125) + - 1261 - ( 12)");
//    interpreterForString3.stringOperation();
//    EXPECT_EQ(false, interpreterForString3.isValidInput());
//
//    InterpreterForString interpreterForString4("(((((()))))(()))");
//    interpreterForString3.stringOperation();
//    EXPECT_EQ(true, interpreterForString4.isValidInput());
//}
//
//TEST(numberValidation, AllCases){
//    InterpreterForString interpreterForString0("2 + 2");
//    interpreterForString0.stringOperation();
//    EXPECT_EQ(true, interpreterForString0.isValidInput());
//
//    InterpreterForString interpreterForString1("12 + 4 - 6 + 15");
//    interpreterForString1.stringOperation();
//    EXPECT_EQ(true, interpreterForString1.isValidInput());
//
//    InterpreterForString interpreterForString2("12 * (46a1 - 16 -(15 + 25))");
//    interpreterForString2.stringOperation();
//    EXPECT_EQ(false, interpreterForString2.isValidInput());
//
//    InterpreterForString interpreterForString3("0 + (125) * - 1261 / ( 12)");
//    interpreterForString3.stringOperation();
//    EXPECT_EQ(true, interpreterForString3.isValidInput());
//
//    InterpreterForString interpreterForString4("51234.5 - 123666.111");
//    interpreterForString4.stringOperation();
//    EXPECT_EQ("51234.5-123666.111", interpreterForString4.getOperation());
//}
//
//TEST(careOfSigns, AllCases){
//    InterpreterForString interpreterForString0("-2  /  2");
//    interpreterForString0.stringOperation();
//    EXPECT_EQ(true, interpreterForString0.isValidInput());
//
//    InterpreterForString interpreterForString1("/*12 - - -4");
//    interpreterForString1.stringOperation();
//    EXPECT_EQ("12-4", interpreterForString1.getOperation());
//
//    InterpreterForString interpreterForString2("- - 4 - -2 + - 1");
//    interpreterForString2.stringOperation();
//    EXPECT_EQ("4+2-1", interpreterForString2.getOperation());
//}


