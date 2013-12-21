#include "gtest/gtest.h"
#include "FourSum.cc"

TEST(FourSum, TestA) {
  Solution sol;

  vector<int> num1;
  num1.push_back(1);num1.push_back(0);num1.push_back(-1);
  num1.push_back(0);num1.push_back(-2);num1.push_back(2);
  int target1 = 0;
  vector<vector<int> > res1 = sol.fourSum(num1, target1);
  ASSERT_EQ(3, res1.size());
}
