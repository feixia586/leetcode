#include "gtest/gtest.h"
#include "UniqueBinarySearchTrees.cc"

TEST(UniqueBinarySearchTrees, TestA) {
  Solution sol;

  int res1 = sol.numTrees(3);
  ASSERT_EQ(5, res1);
}
