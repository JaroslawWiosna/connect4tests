#include <gtest/gtest.h>
#include "ValidatorGrid.hpp"
#include "Grid.hpp"

TEST(Test, ValidatorGridBothPlayersWon)
{
	std::string boarda = "0000000";
	std::string boardb = "0000000";
	std::string boardc = "0000102";
	std::string boardd = "0000102";
	std::string boarde = "0000102";
	std::string boardf = "0000122";

	std::string board = boardf + boarde + boardd 
		+ boardc + boardb + boarda;

	ValidatorGrid valGrid(board);

	ASSERT_FALSE(valGrid.isValid());
}

TEST(Test, ValidatorGridOnePlayerHasTwoStonesMore)
{
	std::string boarda = "0000000";
	std::string boardb = "0000000";
	std::string boardc = "0000000";
	std::string boardd = "0000102";
	std::string boarde = "0000102";
	std::string boardf = "1101122";

	std::string board = boardf + boarde + boardd 
		+ boardc + boardb + boarda;

	ValidatorGrid valGrid(board);

//	ASSERT_FALSE(valGrid.isValid());
}

TEST(Test, ValidatorGridHangingStone)
{
	std::string boarda = "0000000";
	std::string boardb = "0100000";
	std::string boardc = "0000000";
	std::string boardd = "0000102";
	std::string boarde = "0000102";
	std::string boardf = "2101122";

	std::string board = boardf + boarde + boardd 
		+ boardc + boardb + boarda;

	ValidatorGrid valGrid(board);

//	ASSERT_FALSE(valGrid.isValid());
}	

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
