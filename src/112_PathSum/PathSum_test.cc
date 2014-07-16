#include "gtest/gtest.h"
#include "PathSum.cc"

TEST(PathSum, TestA) {
  Solution sol;

  TreeNode* root1 = new TreeNode(4);
  root1->right = new TreeNode(3);
  bool res1 = sol.hasPathSum(root1, 7);
  ASSERT_TRUE(res1);
}
