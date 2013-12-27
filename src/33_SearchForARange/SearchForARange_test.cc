#include "gtest/gtest.h"
#include "SearchForARange.cc"

TEST(SearchForARange, TestA) {
  Solution sol;

  int A1[] = {1, 1, 2};
  vector<int> res1 = sol.searchRange(A1, 3, 1);
  ASSERT_EQ(0, res1[0]);
  ASSERT_EQ(1, res1[1]);
}
