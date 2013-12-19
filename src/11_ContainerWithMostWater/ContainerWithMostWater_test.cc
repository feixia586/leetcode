#include "gtest/gtest.h"
#include "ContainerWithMostWater.cc"

TEST(ContainerWithMostWater, TestA) {
  Solution sol;

  vector<int> height1;
  height1.push_back(3); height1.push_back(2);
  height1.push_back(1); height1.push_back(3);
  int res1 = sol.maxArea(height1);
  ASSERT_EQ(9, res1);
}
