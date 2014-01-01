#include "gtest/gtest.h"
#include "Pow_xn.cc"

TEST(Pow_xn, TestA) {
  Solution sol;

  double res1 = sol.pow(0.00001, 2147483647);
  ASSERT_EQ(0, res1);

  double res2 = sol.pow(2147483647, 0);
  ASSERT_EQ(1, res2);

  double res3 = sol.pow(2.0, 3);
  ASSERT_EQ(8, res3);
}
