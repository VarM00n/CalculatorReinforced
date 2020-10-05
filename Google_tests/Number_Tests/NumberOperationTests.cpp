//
// Created by VarMoon on 10.09.2020.
//

#include "gtest/gtest.h"
#include "../../Number/Number.h"


TEST(getBiggerNumber, allPossibilities)
{
    EXPECT_EQ(2, Number("14").getBiggerNumberSize(Number("3")));
    EXPECT_EQ(2, Number("5").getBiggerNumberSize(Number("20")));
    EXPECT_EQ(1, Number("4").getBiggerNumberSize(Number("4")));
    EXPECT_EQ(1, Number("").getBiggerNumberSize(Number("")));
}

TEST(getDigitFromPosition, allPossibilities)
{
    EXPECT_EQ(1, Number("1387235").getDigitFromPosition(0));
    EXPECT_EQ(5, Number("1387235").getDigitFromPosition(6));
    EXPECT_EQ(8, Number("1387235").getDigitFromPosition(2));
    EXPECT_EQ(2, Number("1387235").getDigitFromPosition(4));
    EXPECT_EQ(0, Number("1234442").getDigitFromPosition(-1));
    EXPECT_EQ(0, Number("1256345").getDigitFromPosition(20));
}

TEST(setDigitInPosition, allPossibilities)
{
    Number number("7");
    number.setDigitInPosition(0, '5');
    EXPECT_EQ("5", number.getValue());

    number.setValue("7");
    number.setDigitInPosition(2, '5');
    EXPECT_EQ("7", number.getValue());

    number.setDigitInPosition(-1, '5');
    EXPECT_EQ("7", number.getValue());

    number.setValue("639471");
    number.setDigitInPosition(4, '0');
    EXPECT_EQ("639401", number.getValue());

    number.setValue("76123476967412374986143653345345");
    number.setDigitInPosition(14, '0');
    EXPECT_EQ("76123476967412074986143653345345", number.getValue());
}

TEST(isValueBigger, allPossibilities)
{
    EXPECT_EQ(false, Number("0").isValueBigger(Number("0")));
    EXPECT_EQ(true, Number("10").isValueBigger(Number("5")));
    EXPECT_EQ(true, Number("32455436").isValueBigger(Number("234562")));
    EXPECT_EQ(true, Number("123456").isValueBigger(Number("123455")));
    EXPECT_EQ(false, Number("5").isValueBigger(Number("10")));
    EXPECT_EQ(false, Number("2412344").isValueBigger(Number("123466786192")));
    EXPECT_EQ(false, Number("653633").isValueBigger(Number("653733")));
}

// no need for negative number (it's being taken care of in a constructor)
TEST(sanitizeValue, allPossibilities)
{
    EXPECT_EQ("0", Number("-0").getValue());
    EXPECT_EQ(false, Number("-0").isFloating());

    EXPECT_EQ("2043", Number("20.43").getValue());
    EXPECT_EQ(true, Number("20.43").isFloating());
    EXPECT_EQ(2, Number("20.43").getFloatingPos());

    EXPECT_EQ("30431143", Number("30431.143").getValue());
    EXPECT_EQ(true, Number("30431.143").isFloating());
    EXPECT_EQ(3, Number("30431.143").getFloatingPos());

    EXPECT_EQ("749239", Number("74923q9").getValue());
    EXPECT_EQ("76542345", Number("a76542345").getValue());
    EXPECT_EQ("76542345", Number("76542345z").getValue());

    EXPECT_EQ("1234", Number("0001234").getValue());
    EXPECT_EQ("432143", Number("0432143").getValue());

    EXPECT_EQ("0", Number("").getValue());
}

TEST(addComa, allPossibilities)
{
    EXPECT_EQ("-1", Number("57443").addComaAndSign(10));
    EXPECT_EQ("-1", Number("57443").addComaAndSign(-1));
    EXPECT_EQ("574.43", Number("57443").addComaAndSign(3));
    EXPECT_EQ("5744.3", Number("57443").addComaAndSign(4));
    EXPECT_EQ("0", Number("0").addComaAndSign(1));
}

//TODO removeTrailingZeros first
//TEST(multiplyByTen, allPossibilities)
//{
//    Number number("0");
//    number.multiplyByTen();
//    EXPECT_EQ("0", number.getValue());
//}