#include "gtest/gtest.h"
#include "PlusOne.cc"

TEST(PlusOne, TestA) {
  Solution sol;

  vector<int> digits1;
  digits1.push_back(1);
  digits1.push_back(0);
  vector<int> res1 = sol.plusOne(digits1);
  ASSERT_EQ(1, res1[0]);
  ASSERT_EQ(1, res1[1]);
}
