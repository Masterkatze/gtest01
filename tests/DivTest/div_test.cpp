#include "../../src/math.hpp"
#include <gtest/gtest.h>

TEST(DivTest, Positive)
{
	EXPECT_EQ(div<int>(4, 2), 2);
	EXPECT_EQ(div<float>(5, 2), 2.5);
	EXPECT_EQ(div<unsigned int>(9, 3), 3);
	EXPECT_EQ(div<char>(2, 1), 2);
}

TEST(DivTest, Negative)
{
	EXPECT_EQ(square(-1), 1);
	EXPECT_EQ(square(-2), 4);
	EXPECT_EQ(square(-3), 9);
	EXPECT_EQ(square(-4), 16);
}

TEST(DivTest, Zero)
{
	EXPECT_THROW(div<int>(1, 0), std::invalid_argument);
}


