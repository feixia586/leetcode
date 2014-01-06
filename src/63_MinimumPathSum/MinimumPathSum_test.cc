#include "gtest/gtest.h"
#include "MinimumPathSum.cc"

TEST(MinimumPathSum, TestA) {
  Solution sol;

  vector<int> row1(2, 1); row1[1] = 2;
  vector<int> row2(2, 1);
  vector<vector<int> > grid1;
  grid1.push_back(row1);
  grid1.push_back(row2);
  int res1 = sol.minPathSum(grid1);
  ASSERT_EQ(3, res1);
}
