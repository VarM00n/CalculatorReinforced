//
// Created by VarMoon on 10.09.2020.
//

#include "gtest/gtest.h"
#include "../../Number/Number.h"
#include "../../Addition/Addition.h"

TEST(Addition, Exceptions){
    Number firstAddend("0");
    Number secondAddend("0");
    EXPECT_EQ("0", Addition(firstAddend, secondAddend).additionFinal().getValue());
}
