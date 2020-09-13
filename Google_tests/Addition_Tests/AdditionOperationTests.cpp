//
// Created by VarMoon on 10.09.2020.
//

#include "gtest/gtest.h"
#include "../../Addition/Addition.h"

TEST(RemoveTrailingZeros, All_Possibilities){
    string number = "0000";
    EXPECT_EQ(AdditionOperation::removeTrailingZeros(number), "0");
    number = "0100";
    EXPECT_EQ(AdditionOperation::removeTrailingZeros(number), "100");
    number = "100";
    EXPECT_EQ(AdditionOperation::removeTrailingZeros(number), "100");
}

TEST(AdditionOperation, All_Possibilities){

}