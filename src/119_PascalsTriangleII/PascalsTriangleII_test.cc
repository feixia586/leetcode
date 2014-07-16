#include "gtest/gtest.h"
#include "PascalsTriangleII.cc"

TEST(PascalsTriangle, TestA) {
  Solution sol;
  vector<int> res = sol.getRow(3);
  ASSERT_EQ(4, res.size());
  ASSERT_EQ(1, res[0]);
  ASSERT_EQ(3, res[1]);
  ASSERT_EQ(3, res[2]);
  ASSERT_EQ(1, res[3]);
}
