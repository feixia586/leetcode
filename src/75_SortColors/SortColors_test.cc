#include "gtest/gtest.h"
#include "SortColors.cc"

TEST(SortColors, TestA) {
  Solution sol;
  int A1[2] = {1, 0};
  sol.sortColors(A1, 2);
  ASSERT_EQ(0, A1[0]);
  ASSERT_EQ(1, A1[1]);
}
