#include "gtest/gtest.h"
#include "BalancedBinaryTree.cc"

TEST(BalancedBinaryTree, TestA) {
  Solution sol;
  TreeNode *root1 = new TreeNode(1);
  root1->right = new TreeNode(2);
  root1->right->left = new TreeNode(3);
  bool res1 = sol.isBalanced(root1);
  ASSERT_FALSE(res1);

  TreeNode *root2 = new TreeNode(1);
  root2->left = new TreeNode(2);
  bool res2 = sol.isBalanced(root2);
  ASSERT_TRUE(res2);
}
