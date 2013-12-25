#include "gtest/gtest.h"
#include "RemoveDuplicatesFromSortedArray.cc"

TEST(RemoveDuplicatesFromSortedArray, TestA) {
  Solution sol;

  int A1[] = {};
  int n1 = 0;
  int res1 = sol.removeDuplicates(A1, n1);
  ASSERT_EQ(0, res1);

  int A2[] = {1, 1, 2};
  int n2 = 3;
  int res2 = sol.removeDuplicates(A2, n2);
  ASSERT_EQ(2, res2);
}
