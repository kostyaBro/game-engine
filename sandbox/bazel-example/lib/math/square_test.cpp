#include "gtest/gtest.h"
#include "sandbox/bazel-example/lib/math/square.h"

TEST(SquareTest, Basics) {
	EXPECT_EQ(Square(-1), 1);
	EXPECT_EQ(Square(2), 4);
	EXPECT_EQ(Square(0), 0);
}

