#include "gtest/gtest.h"
#include "DivideTwoIntegers.cc"
#include <iostream>

TEST(DivideTwoIntegers, TestA) {
  Solution sol;

  int res1 = sol.divide(-17, 5);
  cout << -17 / 5 << endl;
  ASSERT_EQ(-3, res1);

  int res2 = sol.divide(2, 1);
  cout << 2 / 1 << endl;
  ASSERT_EQ(2, res2);

  int res3 = sol.divide(-2147483648, 1);
  cout << -2147483648 / 1 << endl; // cout << -2147483649 / 1; will output -2147483649
  ASSERT_EQ(-2147483648, res3);

  int res4 = sol.divide(1, 1);
  cout << 1 / 1 << endl;
  ASSERT_EQ(1, res4);

  int res5 = sol.divide(2147483647, 3);
  cout << 2147483647 / 3 << endl;
  ASSERT_EQ(715827882, res5);

  int res6 = sol.divide(15, 5);
  cout << 15 / 5 << endl;
  ASSERT_EQ(3, res6);
}
