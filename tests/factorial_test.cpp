// factorial_test.cpp
#include <gtest/gtest.h>
#include "factorial.h"

TEST(FactorialTest, PositiveNumbers) {
    EXPECT_EQ(factorial(0), 1);
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(5), 120);
    EXPECT_EQ(factorial(10), 3628800);
}

TEST(FactorialTest, NegativeInput) {
    EXPECT_THROW(factorial(-1), std::invalid_argument);
}

TEST(GetFactorialsTest, ValidInput) {
    std::vector<unsigned long long> expected = {1, 1, 2, 6, 24};
    EXPECT_EQ(get_factorials(5), expected);
}

TEST(GetFactorialsTest, InvalidInput) {
    EXPECT_THROW(get_factorials(0), std::invalid_argument);
}