#include "gtest/gtest.h"
#include "ReverseInteger.cc"

TEST(ReverseInteger, TestA) {
  Solution sol;

  int x1 = 123;
  int res1 = sol.reverse(x1);
  ASSERT_EQ(321, res1);

  int x2 = -123;
  int res2 = sol.reverse(x2);
  ASSERT_EQ(-321, res2);

  int x3 = 3120;
  int res3 = sol.reverse(x3);
  ASSERT_EQ(213, res3);
}
