#include "gtest/gtest.h"
#include "UniquePathsII.cc"

TEST(UniquePaths, TestA) {
  Solution sol;

  vector<int> row1(3, 0);
  vector<int> row2(3, 0); row2[1] = 1;
  vector<int> row3(3, 0);
  vector<vector<int> > obstacleGrid1;
  obstacleGrid1.push_back(row1);
  obstacleGrid1.push_back(row2);
  obstacleGrid1.push_back(row3);
  int res1 = sol.uniquePathsWithObstacles(obstacleGrid1);
  ASSERT_EQ(2, res1);
}
