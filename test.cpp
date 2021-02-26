//
// Created by Adrian Antonio on 2/26/2021.
//

#include<sstream>
#include "catch.hpp"
#include "MoneyClass.h"

TEST_CASE("A Simple Tokenizer"){

}

TEST_CASE("MoneyClass"){
    std::ostringstream output;
    SECTION("Money Output"){
        MoneyClass base;
        output<<base;
        REQUIRE(output.str()=="$0.00");
        REQUIRE(output.str()=="-$1.00");
        REQUIRE(output.str()=="$20.00");
    }
    SECTION("Overloaded Operators"){
        MoneyClass bigNumber(3452,22);
    }
}

