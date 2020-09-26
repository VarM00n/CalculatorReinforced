//
// Created by VarMoon on 26.09.2020.
//

#include "gtest/gtest.h"
#include "../../Number/Number.h"

TEST(caseWhereZerosAtTheBeggining, IntigerPossibilities)
{
    Number number("01");
    number.removeTrailingZeros();
    EXPECT_EQ("1", number.getValue());

    number.setValue("0003");
    number.removeTrailingZeros();
    EXPECT_EQ("3", number.getValue());

    number.setValue("144234");
    number.removeTrailingZeros();
    EXPECT_EQ("144234", number.getValue());

    number.setValue("10000");
    number.removeTrailingZeros();
    EXPECT_EQ("10000", number.getValue());

    number.setValue("0101010");
    number.removeTrailingZeros();
    EXPECT_EQ("101010", number.getValue());
}

TEST(caseWhereZerosAtTheBeggining, FloatingPossibilities)
{
    Number number1("0.0");
    number1.removeTrailingZeros();
    EXPECT_EQ("0", number1.getValue());
    EXPECT_EQ(1, number1.getFloatingPos());

    Number number2("01.0");
    number2.removeTrailingZeros();
    EXPECT_EQ("10", number2.getValue());
    EXPECT_EQ(1, number2.getFloatingPos());

    Number number3("00462548.91640");
    number3.removeTrailingZeros();
    EXPECT_EQ("46254891640", number3.getValue());
    EXPECT_EQ(5, number3.getFloatingPos());
}

TEST(prepareNumberForOutput, IntPossibilities)
{
    Number number1("647392");
    number1.prepareNumberForOutput();
    EXPECT_EQ("647392", number1.getValue());

    Number number2("07352");
    number1.prepareNumberForOutput();
    EXPECT_EQ("7352", number2.getValue());

    Number number3("0000");
    number3.prepareNumberForOutput();
    EXPECT_EQ("0", number3.getValue());
}

TEST(prepareNumberForOutput, FloatPossibilities)
{
    Number number1("6473.92");
    number1.prepareNumberForOutput();
    EXPECT_EQ("6473.92", number1.getValue());

    Number number2("07.352");
    number2.prepareNumberForOutput();
    EXPECT_EQ("7.352", number2.getValue());

    Number number3("48.032");
    number3.prepareNumberForOutput();
    EXPECT_EQ("48.032", number3.getValue());
}

TEST(prepareNumberForOutput, SignPossibilities)
{
    Number number1("-6473.92");
    number1.prepareNumberForOutput();
    EXPECT_EQ("-6473.92", number1.getValue());

    Number number2("-07.352");
    number2.prepareNumberForOutput();
    EXPECT_EQ("-7.352", number2.getValue());

    Number number3("-48.032");
    number3.prepareNumberForOutput();
    EXPECT_EQ("-48.032", number3.getValue());
}