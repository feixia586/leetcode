#include "gtest/gtest.h"
#include "CombinationSumII.cc"

TEST(CombinationSumII, TestA) {
  Solution sol;

  vector<int> num1;
  num1.push_back(2); num1.push_back(1); num1.push_back(4);
  vector<vector<int> > res1 = sol.combinationSum2(num1, 3);
  ASSERT_EQ(1, res1.size());
  ASSERT_EQ(1, res1[0][0]);
  ASSERT_EQ(2, res1[0][1]);
}
