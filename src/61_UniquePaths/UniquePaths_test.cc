#include "gtest/gtest.h"
#include "UniquePaths.cc"

TEST(UniquePaths, TestA) {
  Solution sol;

  int res1 = sol.uniquePaths(3, 3);
  ASSERT_EQ(6, res1);

  int res2 = sol.uniquePaths(23, 12);
  ASSERT_EQ(193536720, res2);
}
