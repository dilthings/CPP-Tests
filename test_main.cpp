// test_main.cpp
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "math_operations.hpp"

TEST_CASE("Addition function adds two numbers", "[add]") {
    REQUIRE(add(2, 3) == 5);
    REQUIRE(add(-1, 1) == 0);
    REQUIRE(add(0, 0) == 0);
}

