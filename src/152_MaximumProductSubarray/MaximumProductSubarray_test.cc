#include "gtest/gtest.h"
#include "MaximumProductSubarray.cc"

TEST(MaximumProductSubarray, TestA) {
  Solution sol;

  int A1[] = {-4, -3, -2};
  int res1 = sol.maxProduct(A1, 3);
  ASSERT_EQ(12, res1);
}
