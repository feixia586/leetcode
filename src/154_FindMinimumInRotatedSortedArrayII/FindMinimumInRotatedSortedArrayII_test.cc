#include "gtest/gtest.h"
#include "FindMinimumInRotatedSortedArrayII.cc"

TEST(FindMinimumInRotatedSortedArrayII, TestA) {
  Solution sol;

  vector<int> num1;
  num1.push_back(2); num1.push_back(2);
  num1.push_back(0); num1.push_back(1);
  num1.push_back(1); num1.push_back(2);
  int res1 = sol.findMin(num1);
  ASSERT_EQ(0, res1);
}
