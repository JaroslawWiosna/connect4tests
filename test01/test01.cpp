
#include <gtest/gtest.h>
#include "Grid.hpp"

TEST(Test, test01)
{
	std::string board01 = "2111122";

	Grid grid01(board01);
	grid01.print();

	ASSERT_TRUE(grid01.hasFirstWon());
	ASSERT_FALSE(grid01.hasSecondWon());
}

TEST(Test, test02)
{
	std::string board01 = "2101122";

	Grid grid01(board01);

	Grid grid02(board01,'1',2);

	grid02.print();
	ASSERT_FALSE(grid01.hasFirstWon());
	ASSERT_FALSE(grid01.hasSecondWon());

	ASSERT_TRUE(grid02.hasFirstWon());
	ASSERT_FALSE(grid02.hasSecondWon());
}

TEST(Test, test03)
{
	std::string board01 = "2101122";

	Grid grid01(board01);
	ASSERT_EQ(grid01.columnLevel(1),1);
	ASSERT_EQ(grid01.columnLevel(2),1);
	ASSERT_EQ(grid01.columnLevel(3),0);
	ASSERT_EQ(grid01.columnLevel(4),1);
	ASSERT_EQ(grid01.columnLevel(5),1);
	ASSERT_EQ(grid01.columnLevel(6),1);
	ASSERT_EQ(grid01.columnLevel(7),1);

	Grid grid02(board01,'1',0);
	grid02.print();
	ASSERT_EQ(grid02.columnLevel(1),2);
	ASSERT_EQ(grid02.columnLevel(2),1);
	ASSERT_EQ(grid02.columnLevel(3),0);
	ASSERT_EQ(grid02.columnLevel(4),1);
	ASSERT_EQ(grid02.columnLevel(5),1);
	ASSERT_EQ(grid02.columnLevel(6),1);
	ASSERT_EQ(grid02.columnLevel(7),1);
}

TEST(Test, test04)
{
	std::string board04a = "0000000";
	std::string board04b = "0000000";
	std::string board04c = "0000000";
	std::string board04d = "0000102";
	std::string board04e = "0000102";
	std::string board04f = "2101122";

	std::string board04 = board04f + board04e + board04d 
		+ board04c + board04b + board04a;

	Grid grid04(board04);

	ASSERT_FALSE(grid04.hasFirstWon());
	ASSERT_FALSE(grid04.hasSecondWon());
}


int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
