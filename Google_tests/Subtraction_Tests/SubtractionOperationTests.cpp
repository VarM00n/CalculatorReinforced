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