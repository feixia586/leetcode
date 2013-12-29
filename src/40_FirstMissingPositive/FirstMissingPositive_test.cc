#include "gtest/gtest.h"
#include "FirstMissingPositive.cc"

TEST(FirstMissingPositive, TestA) {
  Solution sol;

  int A1[] = {3, 4, -1, 1};
  int n1 = 4;
  int res1 = sol.firstMissingPositive(A1, n1);
  ASSERT_EQ(2, res1);
}
