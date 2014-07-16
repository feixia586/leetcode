#include "gtest/gtest.h"
#include "SurroundedRegions.cc"

TEST(SurroundedRegions, TestA) {
  Solution sol;
  vector<vector<char> > board1(1, vector<char>(1, 'O'));
  sol.solve(board1);
  ASSERT_EQ('O', board1[0][0]);
}
