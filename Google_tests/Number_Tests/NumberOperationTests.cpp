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
    EXPECT_EQ(0, Number("").getBiggerNumberSize(Number("")));
}

TEST(getDigitFromPosition, allPossibilities)
{
    EXPECT_EQ(1, Number("1387235").getDigitFromPosition(0));
    EXPECT_EQ(5, Number("1387235").getDigitFromPosition(6));
    EXPECT_EQ(8, Number("1387235").getDigitFromPosition(2));
    EXPECT_EQ(2, Number("1387235").getDigitFromPosition(4));

}