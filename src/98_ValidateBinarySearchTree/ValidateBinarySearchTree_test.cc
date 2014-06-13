#include "gtest/gtest.h"
#include "ValidateBinarySearchTree.cc"

TEST(ValidateBinarySearchTree, TestA) {
  Solution sol;
  TreeNode *root1 = new TreeNode(10);
  root1->left = new TreeNode(5);
  root1->right = new TreeNode(15);
  root1->right->left = new TreeNode(6);
  bool res1 = sol.isValidBST(root1);
  ASSERT_FALSE(res1);
}
