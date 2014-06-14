#include "gtest/gtest.h"
#include "RecoverBinarySearchTree.cc"

TEST(RecoverBinarySearchTree, TestA) {
  Solution sol;
  TreeNode *root1 = new TreeNode(2);
  root1->left = new TreeNode(3);
  root1->right = new TreeNode(1);
  sol.recoverTree(root1);
  ASSERT_EQ(2, root1->val);
  ASSERT_EQ(1, root1->left->val);
  ASSERT_EQ(3, root1->right->val);
}
