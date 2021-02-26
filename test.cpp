//
// Created by Adrian Antonio on 2/26/2021.
//

#include<sstream>
#include "catch.hpp"
#include "MoneyClass.h"

TEST_CASE("A Simple Tokenizer"){

}

TEST_CASE("MoneyClass"){
    MoneyClass total;
    MoneyClass tenBucks(10);
    MoneyClass fiveBucks(5);

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
    SECTION("Only Cents"){
        MoneyClass fiftyCents(0,50);
        output<<fiftyCents;
        REQUIRE(output.str()=="$0.50");
    }
    SECTION("Addition Operators"){
        bigNumber+=smallNumber;
        REQUIRE(bigNumber.getValue()==346472);
        total = tenBucks + fiveBucks;
        REQUIRE(total.getValue()==1500);
    }
    SECTION("Subtraction Operators"){
        bigNumber-=smallNumber;
        REQUIRE(bigNumber.getValue()==343972);
        total = tenBucks - fiveBucks;
        REQUIRE(total.getValue()==500);
    }
    SECTION("Multiplication Operators"){
        smallNumber*=smallNumber;
        REQUIRE(smallNumber.getValue()==1562500);
        total = tenBucks * fiveBucks;
        REQUIRE(total.getValue()==5000);
    }
    SECTION("Division Operators"){
        smallNumber/=smallNumber;
        REQUIRE(smallNumber.getValue()==1);
        total= tenBucks / fiveBucks;
        REQUIRE(total.getValue()==2);
    }
    SECTION("Boolean Operators"){
        REQUIRE(tenBucks == tenBucks);
        REQUIRE(fiveBucks < tenBucks);
    }
}

