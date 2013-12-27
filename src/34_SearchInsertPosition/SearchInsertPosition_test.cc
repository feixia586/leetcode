#include "gtest/gtest.h"
#include "SearchInsertPosition.cc"

TEST(SearchInsertPosition, TestA) {
  Solution sol;
  int A[] = {1, 3, 5, 6};
  int res1 = sol.searchInsert(A, 4, 7);
  ASSERT_EQ(4, res1);
}
