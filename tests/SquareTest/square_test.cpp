#include "../../src/square.hpp"
#include <gtest/gtest.h>

TEST(SquareTest, Positive)
{
	EXPECT_EQ(square(1), 1);
	EXPECT_EQ(square(2), 4);
	EXPECT_EQ(square(3), 9);
	EXPECT_EQ(square(4), 16);
}

TEST(SquareTest, Negative)
{
	EXPECT_EQ(square(-1), 1);
	EXPECT_EQ(square(-2), 4);
	EXPECT_EQ(square(-3), 9);
	EXPECT_EQ(square(-4), 16);
}

TEST(SquareTest, Zero)
{
	EXPECT_EQ(square(0), 0);
}


