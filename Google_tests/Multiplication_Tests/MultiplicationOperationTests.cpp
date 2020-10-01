//
// Created by VarMoon on 01.10.2020.
//

#include "gtest/gtest.h"
#include "../../Number/Number.h"
#include "../../Multiplication/Multiplication.h"
#include "MultiplicationNumbers.h"

MultiplicationNumbers mN;

TEST(Multiplication, PosPosSmaller)
{
    for (auto &PosPosSmaller : mN.PosPosSmaller) {
        Number multiplicand(PosPosSmaller[0]);
        Number multiplier(PosPosSmaller[1]);
        EXPECT_EQ(PosPosSmaller[2], Multiplication(multiplicand, multiplier).multiplicationFinal().getValue());
    }
}