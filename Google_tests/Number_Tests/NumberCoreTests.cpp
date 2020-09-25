//
// Created by VarMoon on 25.09.2020.
//

#include "gtest/gtest.h"
#include "../../Number/NumberCore.h"
#include "../../Number/Number.h"


//Tests written in case of adding logic to methods included in class - NumberCore
TEST(getValue, allPossibilities)
{
    EXPECT_EQ("0", Number("").getValue());
    EXPECT_EQ("43421", Number("43421").getValue());
    EXPECT_EQ("3241651235", Number("3241651235").getValue());
    EXPECT_EQ("876154265", Number("876154265").getValue());
    EXPECT_EQ("84656589245", Number("84656589245").getValue());
}

TEST(setValue, allPossibilities)
{
    Number number("");
    number.setValue("0");
    EXPECT_EQ("0", number.getValue());
    number.setValue("162345");
    EXPECT_EQ("162345", number.getValue());
    number.setValue("74.27");
    EXPECT_EQ("74.27", number.getValue());
    number.setValue("-7427");
    EXPECT_EQ("-7427", number.getValue());
    number.setValue("-74.27");
    EXPECT_EQ("-74.27", number.getValue());
}

TEST(isSign, allPossibilities)
{
    Number number("0");
    EXPECT_EQ(false, number.isSign());
    Number number1("-0");
    EXPECT_EQ(false, number.isSign());
    Number number2("12346");
    EXPECT_EQ(false, number.isSign());
    Number number3("-4621348");
    EXPECT_EQ(false, number.isSign());
    Number number4("-3");
    EXPECT_EQ(false, number.isSign());
}

TEST(setSign, allPossibilities)
{
    Number number("15641");
    number.setSign(true);
    EXPECT_EQ(true, number.isSign());
    number.setSign(false);
    EXPECT_EQ(false, number.isSign());
}

TEST(isFloating, allPossibilities)
{
    Number number1("1234877");
    EXPECT_EQ(false, number1.isFloating());
    Number number2("-14.27");
    EXPECT_EQ(true, number2.isFloating());
    Number number3("-4612348");
    EXPECT_EQ(false, number3.isFloating());
}

TEST(setFloating, allPossibilities)
{
    Number number("15641");
    number.setFloating(true);
    EXPECT_EQ(true, number.isFloating());
    number.setFloating(false);
    EXPECT_EQ(false, number.isFloating());
}

TEST(getFloatingPos, allPossibilities)
{
    Number number1("51234");
    EXPECT_EQ(0, number1.getFloatingPos());
    Number number2("4432.1");
    EXPECT_EQ(1, number2.getFloatingPos());
    Number number3("0.1234");
    EXPECT_EQ(4, number3.getFloatingPos());
}

TEST(setFloatingPos, allPossibilities)
{
    Number number("745632");
    number.setFloatingPos(4);
    EXPECT_EQ(4, number.getFloatingPos());
    number.setFloatingPos(1);
    EXPECT_EQ(1, number.getFloatingPos());
}

TEST(size, AllPossibilities)
{
    Number number("");
    EXPECT_EQ(1, number.size());
    number.setValue("1");
    EXPECT_EQ(1, number.size());
    number.setValue("4871234");
    EXPECT_EQ(7, number.size());
}

TEST(isNegative, AllPossibilities)
{
    EXPECT_EQ(false, Number("23467").isNegative());
    EXPECT_EQ(false, Number("0").isNegative());
    EXPECT_EQ(false, Number("-0").isNegative());
    EXPECT_EQ(true, Number("-1").isNegative());
    EXPECT_EQ(true, Number("-463").isNegative());
}

TEST(isPositive, AllPossibilities)
{
    EXPECT_EQ(true, Number("23467").isPositive());
    EXPECT_EQ(true, Number("0").isPositive());
    EXPECT_EQ(true, Number("-0").isPositive());
    EXPECT_EQ(false, Number("-1").isPositive());
    EXPECT_EQ(false, Number("-463").isPositive());
}