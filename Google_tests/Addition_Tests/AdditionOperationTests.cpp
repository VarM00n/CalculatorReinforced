//
// Created by VarMoon on 10.09.2020.
//

#include "gtest/gtest.h"
#include "../../Number/Number.h"
#include "../../Addition/Addition.h"
//#include "AdditionNumbers.h"
#include "AdditionNumbers.h"

AdditionNumbers aN;


TEST(Addition, PosNegBigger)
{
    for (auto &PosNegBigger : aN.PosNegBigger) {
        Number firstAddend1(PosNegBigger[0]);
        Number secondAddend1(PosNegBigger[1]);
        EXPECT_EQ(PosNegBigger[2], Addition(firstAddend1, secondAddend1).additionFinal().getValue());
    }
}

TEST(Addition, PosNegSmaller)
{
    for (auto &PosNegSmaller : aN.PosNegSmaller) {
        Number firstAddend1(PosNegSmaller[0]);
        Number secondAddend1(PosNegSmaller[1]);
        EXPECT_EQ(PosNegSmaller[2], Addition(firstAddend1, secondAddend1).additionFinal().getValue());
    }
}

TEST(Addition, NegPosAll){
    for (auto &NegPosSmallerAndBigger : aN.NegPosSmallerAndBigger) {
        Number firstAddend1(NegPosSmallerAndBigger[0]);
        Number secondAddend1(NegPosSmallerAndBigger[1]);
        EXPECT_EQ(NegPosSmallerAndBigger[2], Addition(firstAddend1, secondAddend1).additionFinal().getValue());
    }
}

TEST(Addition, PosPosSmaller){
    for (auto &PosPosSmaller : aN.PosPosSmaller) {
        Number firstAddend1(PosPosSmaller[0]);
        Number secondAddend1(PosPosSmaller[1]);
        EXPECT_EQ(PosPosSmaller[2], Addition(firstAddend1, secondAddend1).additionFinal().getValue());
    }
}

TEST(Addition, PosPosBigger){
    for (auto &PosPosBigger : aN.PosPosBigger) {
        Number firstAddend1(PosPosBigger[0]);
        Number secondAddend1(PosPosBigger[1]);
        EXPECT_EQ(PosPosBigger[2], Addition(firstAddend1, secondAddend1).additionFinal().getValue());
    }
}

TEST(Addition, NegNegAll){
    for (auto &NegNegSmallerAndBigger : aN.NegNegSmallerAndBigger) {
        Number firstAddend1(NegNegSmallerAndBigger[0]);
        Number secondAddend1(NegNegSmallerAndBigger[1]);
        EXPECT_EQ(NegNegSmallerAndBigger[2], Addition(firstAddend1, secondAddend1).additionFinal().getValue());
    }
}