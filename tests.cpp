// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"

#include "student.hpp" // student implementations

// =====================
// tests for exercise 1
// ---------------------

TEST_CASE("Ex1", "[example]")
{
    REQUIRE(replace("Hello World", "Hello", "Bye") == "Bye World");
    REQUIRE(replace("This is a sentence", "sentence", "phrase") == "This is a phrase");
    REQUIRE(replace("I like to sleep outside", "like", "hate") == "I hate to sleep outside");
    REQUIRE(replace("Hello World", "Greetings", "Bye") == "Hello World")
        
}

// =====================
// tests for exercise 2
// ---------------------


