#include "gtest/gtest.h"
#include "SpiralMatrixII.cc"

TEST(SpiralMatrixII, TestA) {
  Solution sol;

  vector<vector<int> > res = sol.generateMatrix(2);
  ASSERT_EQ(1, res[0][0]); ASSERT_EQ(2, res[0][1]);
  ASSERT_EQ(4, res[1][0]); ASSERT_EQ(3, res[1][1]);
}
