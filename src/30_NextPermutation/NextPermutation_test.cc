#include "gtest/gtest.h"
#include "NextPermutation.cc"

TEST(NextPermutation, TestA) {
  Solution sol;

  vector<int> num1;
  num1.push_back(1); num1.push_back(2); num1.push_back(3);
  sol.nextPermutation(num1);
  ASSERT_EQ(3, num1.size());
  ASSERT_EQ(1, num1[0]);
  ASSERT_EQ(3, num1[1]);
  ASSERT_EQ(2, num1[2]);
}
