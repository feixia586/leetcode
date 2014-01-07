#include "gtest/gtest.h"
#include "ClimbingStairs.cc"

TEST(ClimbingStairs, TestA) {
  Solution sol;

  int res1 = sol.climbStairs(2);
  ASSERT_EQ(2, res1);

  int res2 = sol.climbStairs(4);
  ASSERT_EQ(5, res2);

  int res3 = sol.climbStairs(38);
  ASSERT_EQ(63245986, res3);
}
