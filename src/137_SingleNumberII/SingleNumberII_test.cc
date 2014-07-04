#include "gtest/gtest.h"
#include "SingleNumberII.cc"

TEST(SingleNumberII, TestA) {
  Solution sol;
  int A1[4] = {9, 7, 9, 9};
  int n1= 4;
  int res1 = sol.singleNumber(A1, n1);
  ASSERT_EQ(7, res1);
}
