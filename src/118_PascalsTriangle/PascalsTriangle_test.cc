#include "gtest/gtest.h"
#include "PascalsTriangle.cc"

TEST(PascalsTriangle, TestA) {
  Solution sol;

  vector<vector<int> > res1 = sol.generate(1);
  ASSERT_EQ(1, res1[0][0]);
}
