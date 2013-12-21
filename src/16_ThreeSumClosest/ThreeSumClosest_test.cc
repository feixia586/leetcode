#include "gtest/gtest.h"
#include "ThreeSumClosest.cc"

TEST(ThreeSumClosest, TestA) {
  Solution sol;

  vector<int> num1;
  num1.push_back(1); num1.push_back(1); num1.push_back(-1);
  num1.push_back(-1); num1.push_back(3);
  int target1 = -1;
  int res1 = sol.threeSumClosest(num1, target1);
  ASSERT_EQ(-1, res1);
}
