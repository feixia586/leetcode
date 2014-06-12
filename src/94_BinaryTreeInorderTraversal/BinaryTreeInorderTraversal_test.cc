#include "gtest/gtest.h"
#include "BinaryTreeInorderTraversal.cc"

TEST(BinaryTreeInorderTraversal, TestA) {
  Solution sol;
  TreeNode *root1 = new TreeNode(1);
  root1->right = new TreeNode(2);
  root1->right->left = new TreeNode(3);

  vector<int> res1 = sol.inorderTraversal(root1);

  ASSERT_EQ(3, res1.size());
  ASSERT_EQ(1, res1[0]);
  ASSERT_EQ(3, res1[1]);
  ASSERT_EQ(2, res1[2]);
}
