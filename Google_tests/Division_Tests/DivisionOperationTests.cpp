//
// Created by VarMoon on 02.10.2020.
//

#include "gtest/gtest.h"
#include "DivisionNumbers.h"
#include "../../Number/Number.h"
#include "../../Division/Division.h"

DivisionNumbers dN;

TEST(Division, PosPosBigger)
{
    for (auto &PosPosBigger : dN.PosPosBigger) {
        Number firstAddend1(PosPosBigger[0]);
        Number secondAddend1(PosPosBigger[1]);
        EXPECT_EQ(PosPosBigger[2], Division(firstAddend1, secondAddend1).divisionFinal().getValue());
    }
}

TEST(Division, PosPosSmaller)
{
    for (auto &PosPosSmaller : dN.PosPosSmaller) {
        Number firstAddend1(PosPosSmaller[0]);
        Number secondAddend1(PosPosSmaller[1]);
        EXPECT_EQ(PosPosSmaller[2], Division(firstAddend1, secondAddend1).divisionFinal().getValue());
    }
}

TEST(Division, NegNegAll)
{
    for (auto &NegNegAll : dN.NegNegAll) {
        Number firstAddend1(NegNegAll[0]);
        Number secondAddend1(NegNegAll[1]);
        EXPECT_EQ(NegNegAll[2], Division(firstAddend1, secondAddend1).divisionFinal().getValue());
    }
}
TEST(Division, PosNegAll)
{
    for (auto &PosNegAll : dN.PosNegAll) {
        Number firstAddend1(PosNegAll[0]);
        Number secondAddend1(PosNegAll[1]);
        EXPECT_EQ(PosNegAll[2], Division(firstAddend1, secondAddend1).divisionFinal().getValue());
    }
}
TEST(Division, NegPosAll)
{
    for (auto &NegPosAll : dN.NegPosAll) {
        Number firstAddend1(NegPosAll[0]);
        Number secondAddend1(NegPosAll[1]);
        EXPECT_EQ(NegPosAll[2], Division(firstAddend1, secondAddend1).divisionFinal().getValue());
    }
}
