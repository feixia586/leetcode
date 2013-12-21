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
  ASSERT_EQ(-1, res1[0][0]);
  ASSERT_EQ(0, res1[0][1]);
  ASSERT_EQ(0, res1[0][2]);
  ASSERT_EQ(1, res1[0][3]);
  ASSERT_EQ(-2, res1[1][0]);
  ASSERT_EQ(-1, res1[1][1]);
  ASSERT_EQ(1, res1[1][2]);
  ASSERT_EQ(2, res1[1][3]);
  ASSERT_EQ(-2, res1[2][0]);
  ASSERT_EQ(0, res1[2][1]);
  ASSERT_EQ(0, res1[2][2]);
  ASSERT_EQ(2, res1[2][3]);
}
