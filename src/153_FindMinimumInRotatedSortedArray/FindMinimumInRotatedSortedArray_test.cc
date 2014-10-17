#include "gtest/gtest.h"
#include "FindMinimumInRotatedSortedArray.cc"

TEST(FindMinimumInRotatedSortedArray, TestA) {
  Solution sol;
  vector<int> num1;
  num1.push_back(1); num1.push_back(2);
  int res1 = sol.findMin(num1);
  ASSERT_EQ(1, res1);

  vector<int> num2;
  num2.push_back(4);
  num2.push_back(5);
  num2.push_back(6);
  num2.push_back(7);
  num2.push_back(0);
  num2.push_back(1);
  num2.push_back(2);
  int res2 = sol.findMin(num2);
  ASSERT_EQ(0, res2);
}
