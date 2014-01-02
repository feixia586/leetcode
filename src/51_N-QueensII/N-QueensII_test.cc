#include "gtest/gtest.h"
#include "N-QueensII.cc"

TEST(N_QueensII, TestA) {
  Solution sol;

  int res1 = sol.totalNQueens(4);
  ASSERT_EQ(2, res1);

  int res2 = sol.totalNQueens(8);
  ASSERT_EQ(92, res2);

  int res3 = sol.totalNQueens(11);
  ASSERT_EQ(2680, res3);
}
