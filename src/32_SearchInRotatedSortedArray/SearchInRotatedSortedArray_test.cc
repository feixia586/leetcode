#include "gtest/gtest.h"
#include "SearchInRotatedSortedArray.cc"

TEST(SearchInRotedSortedArray, TestA) {
  Solution sol;

  int A1[] = {4, 5, 6, 7, 0, 1, 2};
  int res1 = sol.search(A1, 7, 1);
  ASSERT_EQ(5, res1);

  int A2[] = {3, 1};
  int res2 = sol.search(A2, 2, 1);
  ASSERT_EQ(1, res2);
}
