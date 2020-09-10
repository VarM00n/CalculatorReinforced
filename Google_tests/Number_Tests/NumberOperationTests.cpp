//
// Created by VarMoon on 10.09.2020.
//

#include "gtest/gtest.h"
#include "../../Number/Number.h"


TEST(getBiggerNumber, allPossibilities)
{
    EXPECT_EQ(1, Number::TEST_getBiggerNumber(Number(1), Number(9)));
    EXPECT_EQ(2, Number::TEST_getBiggerNumber(Number(10), Number(5)));
    EXPECT_EQ(2, Number::TEST_getBiggerNumber(Number(7), Number(67)));
}