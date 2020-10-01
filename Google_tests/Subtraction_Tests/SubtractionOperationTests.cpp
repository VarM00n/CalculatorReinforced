//
// Created by VarMoon on 30.09.2020.
//

#include "gtest/gtest.h"
#include "../../Number/Number.h"
#include "../../Addition/Addition.h"
#include "../../Subtraction/Subtraction.h"
#include "SubtractionNumbers.h"

SubtractionNumbers Sn;

TEST(Subtraction, PosNegSmaller)
{
    for (auto &PosNegSmaller : Sn.PosNegSmaller) {
        Number minuend(PosNegSmaller[0]);
        Number subtrahend(PosNegSmaller[1]);
        EXPECT_EQ(PosNegSmaller[2], Subtraction(minuend, subtrahend).subtractionFinal().getValue());
    }
}

TEST(Subtraction, PosNegBigger)
{
    for (auto &PosNegBigger : Sn.PosNegBigger) {
        Number minuend(PosNegBigger[0]);
        Number subtrahend(PosNegBigger[1]);
        EXPECT_EQ(PosNegBigger[2], Subtraction(minuend, subtrahend).subtractionFinal().getValue());
    }
}

TEST(Subtraction, NegPosSmaller)
{
    for (auto &NegPosSmaller : Sn.NegPosSmaller) {
        Number minuend(NegPosSmaller[0]);
        Number subtrahend(NegPosSmaller[1]);
        EXPECT_EQ(NegPosSmaller[2], Subtraction(minuend, subtrahend).subtractionFinal().getValue());
    }
}

TEST(Subtraction, NegNegSmaller)
{
    for (auto &NegNegSmaller : Sn.NegNegSmaller) {
        Number minuend(NegNegSmaller[0]);
        Number subtrahend(NegNegSmaller[1]);
        EXPECT_EQ(NegNegSmaller[2], Subtraction(minuend, subtrahend).subtractionFinal().getValue());
    }
}

TEST(Subtraction, NegNegBigger)
{
    for (auto &NegNegBigger : Sn.NegNegBigger) {
        Number minuend(NegNegBigger[0]);
        Number subtrahend(NegNegBigger[1]);
        EXPECT_EQ(NegNegBigger[2], Subtraction(minuend, subtrahend).subtractionFinal().getValue());
    }
}

TEST(Subtraction, PosPosSmaller)
{
    for (auto &PosPosSmaller : Sn.PosPosSmaller) {
        Number minuend(PosPosSmaller[0]);
        Number subtrahend(PosPosSmaller[1]);
        EXPECT_EQ(PosPosSmaller[2], Subtraction(minuend, subtrahend).subtractionFinal().getValue());
    }
}

TEST(Subtraction, PosPosBigger)
{
    for (auto &PosPosBigger : Sn.PosPosBigger) {
        Number minuend(PosPosBigger[0]);
        Number subtrahend(PosPosBigger[1]);
        EXPECT_EQ(PosPosBigger[2], Subtraction(minuend, subtrahend).subtractionFinal().getValue());
    }
}

int main() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}