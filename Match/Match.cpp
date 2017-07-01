#include <gtest/gtest.h>
#include "Match.hpp"

TEST(Test, MatchDummyTest)
{
	ASSERT_FALSE(477772 == 24);
}

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
