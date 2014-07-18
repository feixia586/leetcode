#include "gtest/gtest.h"
#include "SymmetricTree.cc"

TEST(SymmetricTree, TestA) {
  Solution sol;

  TreeNode *root1 = new TreeNode(2);
  root1->left = new TreeNode(3); root1->right = new TreeNode(3);
  root1->left->right = new TreeNode(4);
  root1->right->right = new TreeNode(4);
  bool res1 = sol.isSymmetric(root1);
  ASSERT_FALSE(res1);
}
