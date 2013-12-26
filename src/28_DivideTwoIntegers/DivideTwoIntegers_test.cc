#include "gtest/gtest.h"
#include "DivideTwoIntegers.cc"
#include <iostream>

TEST(DivideTwoIntegers, TestA) {
  Solution sol;

  int res1 = sol.divide(-17, 5);
  cout << -17 / 5 << endl;
  ASSERT_EQ(-3, res1);
}
