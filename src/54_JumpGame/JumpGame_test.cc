#include "gtest/gtest.h"
#include "JumpGame.cc"

TEST(JumpGame, TestA) {
  Solution sol;

  int A1[] = {2, 3, 1, 1, 4};
  int n1 = 5;
  bool res1 = sol.canJump(A1, n1);
  ASSERT_TRUE(res1);

  int A2[] = {3, 2, 1, 0, 4};
  int n2 = 5;
  bool res2 = sol.canJump(A2, n2);
  ASSERT_FALSE(res2);

  int A3[] = {1, 0, 1, 0};
  int n3 = 4;
  bool res3 = sol.canJump(A3, n3);
  ASSERT_FALSE(res3);

  int A4[] = {0};
  int n4 = 1;
  bool res4 = sol.canJump(A4, n4);
  ASSERT_TRUE(res4);
}
