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

TEST(Multiplication, PosPosBigger)
{
    for (auto &PosPosBigger : mN.PosPosBigger) {
        Number multiplicand(PosPosBigger[0]);
        Number multiplier(PosPosBigger[1]);
        EXPECT_EQ(PosPosBigger[2], Multiplication(multiplicand, multiplier).multiplicationFinal().getValue());
    }
}

TEST(Multiplication, NegNegSmaller)
{
    for (auto &NegNegSmaller : mN.NegNegSmaller) {
        Number multiplicand(NegNegSmaller[0]);
        Number multiplier(NegNegSmaller[1]);
        EXPECT_EQ(NegNegSmaller[2], Multiplication(multiplicand, multiplier).multiplicationFinal().getValue());
    }
}

TEST(Multiplication, NegNegBigger)
{
    for (auto &NegNegBigger : mN.NegNegBigger) {
        Number multiplicand(NegNegBigger[0]);
        Number multiplier(NegNegBigger[1]);
        EXPECT_EQ(NegNegBigger[2], Multiplication(multiplicand, multiplier).multiplicationFinal().getValue());
    }
}

TEST(Multiplication, NegPosAll)
{
    for (auto &NegPosAll : mN.NegPosAll) {
        Number multiplicand(NegPosAll[0]);
        Number multiplier(NegPosAll[1]);
        EXPECT_EQ(NegPosAll[2], Multiplication(multiplicand, multiplier).multiplicationFinal().getValue());
    }
}

TEST(Multiplication, PosNegAll)
{
    for (auto &PosNegAll : mN.PosNegAll) {
        Number multiplicand(PosNegAll[0]);
        Number multiplier(PosNegAll[1]);
        EXPECT_EQ(PosNegAll[2], Multiplication(multiplicand, multiplier).multiplicationFinal().getValue());
    }
}