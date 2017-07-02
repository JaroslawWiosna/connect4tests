#include <gtest/gtest.h>
#include "Grid.hpp"

TEST(Test, findNextWinningMove)
{
	std::string boarda = "0000000";
	std::string boardb = "0000000";
	std::string boardc = "0000000";
	std::string boardd = "0010002";
	std::string boarde = "0010002";
	std::string boardf = "0010002";

	std::string board = boardf + boarde + boardd 
		+ boardc + boardb + boarda;

	Grid grid(board);

	ASSERT_EQ(3-1,grid.findNextWinningMove('1'));
}

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
