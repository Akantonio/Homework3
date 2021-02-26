//
// Created by Adrian Antonio on 2/26/2021.
//

#include<sstream>
#include "catch.hpp"
#include "MoneyClass.h"

TEST_CASE("A Simple Tokenizer"){

}

TEST_CASE("MoneyClass"){
    MoneyClass bigNumber(3452,22);
    MoneyClass smallNumber(12,50);
    MoneyClass negativeNumber(-10);
    std::ostringstream output;
    SECTION("Zero Money") {

        MoneyClass base;
        output << base;
        REQUIRE(output.str() == "$0.00");
    }
    SECTION("Negative Money") {
        output << negativeNumber;
        REQUIRE(output.str() == "-$10.00");
    }
    SECTION("Non-zero Money"){
        MoneyClass twentyBucks(20);
        output<<twentyBucks;
        REQUIRE(output.str()=="$20.00");
    }
    SECTION("Overloaded Operators"){
        bigNumber+=smallNumber;
        output<<bigNumber;
        REQUIRE(output.str()=="$3464.72");
    }
}

