#include "gtest/gtest.h"
#include "MaximumSubarray.cc"

TEST(MaximumSubarray, TestA) {
  Solution sol;

  int A1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int n1 = 9;
  int res1 = sol.maxSubArray(A1, n1);
  ASSERT_EQ(6, res1);
}
