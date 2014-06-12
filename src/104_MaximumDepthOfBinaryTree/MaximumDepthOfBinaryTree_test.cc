#include "gtest/gtest.h"
#include "MaximumDepthOfBinaryTree.cc"

TEST(MaximumDepthOfBinaryTree, TestA) {
  Solution sol;
  TreeNode *root1 = new TreeNode(1);
  root1->right = new TreeNode(2);
  root1->right->left = new TreeNode(3);

  int res1 = sol.maxDepth(root1);

  ASSERT_EQ(3, res1);
}
