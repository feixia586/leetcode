#include "gtest/gtest.h"
#include "BinaryTreeZigzagLevelOrderTraversal.cc"

TEST(BinaryTreeZigzagLevelOrderTraversal, TestA) {
  Solution sol;

  TreeNode *root1 = new TreeNode(9);
  root1->left = new TreeNode(3);
  root1->right = new TreeNode(4);
  vector<vector<int> > res = sol.zigzagLevelOrder(root1);
  ASSERT_EQ(2, res.size());
  ASSERT_EQ(9, res[0][0]);
  ASSERT_EQ(4, res[1][0]);
  ASSERT_EQ(3, res[1][1]);
}
