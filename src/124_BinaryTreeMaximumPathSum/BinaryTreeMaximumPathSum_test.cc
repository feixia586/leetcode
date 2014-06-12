#include "gtest/gtest.h"
#include "BinaryTreeMaximumPathSum.cc"

TEST(BinaryTreeMaximumPathSum, TestA) {
  Solution sol;
  TreeNode *root1 = new TreeNode(-5);
  int res1 = sol.maxPathSum(root1);
  ASSERT_EQ(-5, res1);
}
