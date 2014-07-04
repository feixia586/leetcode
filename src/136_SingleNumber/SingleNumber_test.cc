#include "gtest/gtest.h"
#include "SingleNumber.cc"

TEST(SingleNumber, TestA) {
  Solution sol;

  int A1[3] = {9, 2, 9};
  int n1 = 3;
  int res1 = sol.singleNumber(A1, n1);
  ASSERT_EQ(2, res1);
}
