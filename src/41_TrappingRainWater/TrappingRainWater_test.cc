#include "gtest/gtest.h"
#include "TrappingRainWater.cc"

TEST(TrappingRainWater, TestA) {
  Solution sol;

  int A1[] = {0,1,0,2,1,0,1,3,2,1,2,1};
  int n1 = 12;
  int res1 = sol.trap(A1, n1);
  ASSERT_EQ(6, res1);
}
