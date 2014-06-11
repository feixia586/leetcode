#include "gtest/gtest.h"
#include "SearchInRotatedSortedArrayII.cc"

TEST(SearchInRotatedSortedArrayII, TestA) {
  Solution sol;
  int A1[] = {1, 0, 1, 1, 1, 1, 1, 1};
  int n1 = 8;
  bool res1 = sol.search(A1, n1, 0);

  ASSERT_TRUE(res1);
}
