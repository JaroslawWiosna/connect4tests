#include <gtest/gtest.h>
#include "Game.hpp"

TEST(Test, GameDummyTest)
{
	ASSERT_FALSE(42 == 24);
}

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
