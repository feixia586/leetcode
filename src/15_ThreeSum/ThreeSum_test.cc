#include "gtest/gtest.h"
#include "ThreeSum.cc"

TEST(ThreeSum, TestA) {
  Solution sol;

  vector<int> num1;
  num1.push_back(-1); num1.push_back(0); num1.push_back(1);
  vector<vector<int> > res1 = sol.threeSum(num1);
  ASSERT_EQ(1, res1.size());
  ASSERT_EQ(-1, res1[0][0]);
  ASSERT_EQ(0, res1[0][1]);
  ASSERT_EQ(1, res1[0][2]);

  vector<int> num2;
  num2.push_back(3); num2.push_back(0); num2.push_back(-2);
  num2.push_back(-1); num2.push_back(1); num2.push_back(2);
  vector<vector<int> > res2 = sol.threeSum(num2);
  ASSERT_EQ(3, res2.size());
}
