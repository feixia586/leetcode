#include "gtest/gtest.h"
#include "N-Queens.cc"

TEST(N_Queens, TestA) {
  Solution sol;

  vector<vector<string> > res1 = sol.solveNQueens(4);
  ASSERT_EQ(2, res1.size());
}
