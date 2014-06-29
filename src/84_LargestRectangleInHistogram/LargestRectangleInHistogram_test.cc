#include "gtest/gtest.h"
#include "LargestRectangleInHistogram.cc"

TEST(LargestRectangleInHistogram, TestA) {
  Solution sol;

  vector<int> height1;
  height1.push_back(2); height1.push_back(1); height1.push_back(5);
  height1.push_back(6); height1.push_back(2); height1.push_back(3);
  int res1 = sol.largestRectangleArea(height1);
  ASSERT_EQ(10, res1);
}
