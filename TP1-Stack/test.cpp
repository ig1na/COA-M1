#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "Stack.h"

TEST_CASE("Create a Stack and insert an element", "[stack]")
{
    Stack s;
    s.push(1);
    REQUIRE(s.size() == 1);
    s.pop();
    REQUIRE(s.size() == 0);
    REQUIRE(s.isEmpty() == true);
}

// TEST_CASE("Create a Stack and insert elements when the stack is full", "[stack]")
// {
//   Stack s;
//   s.push(1);
//   s.push(2);
//   s.push(3);
//   s.push(4);
//   s.push(5);
//   s.push(6);
//   REQUIRE(s.size() == 10);
// }
