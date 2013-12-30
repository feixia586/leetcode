#include "gtest/gtest.h"
#include "JumpGameII.cc"

TEST(JumpGameII, TestA) {
  Solution sol;

  int A1[] = {2, 3, 1, 1, 4};
  int n1 = 5;
  int res1 = sol.jump(A1, n1);
  ASSERT_EQ(2, res1);
}
