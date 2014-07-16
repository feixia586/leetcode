#include "gtest/gtest.h"
#include "GrayCode.cc"

TEST(GrayCode, TestA) {
  Solution sol;

  vector<int> res1 = sol.grayCode(2);
  ASSERT_EQ(0, res1[0]);
  ASSERT_EQ(1, res1[1]);
  ASSERT_EQ(3, res1[2]);
  ASSERT_EQ(2, res1[3]);
}
