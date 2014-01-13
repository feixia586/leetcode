#include "gtest/gtest.h"
#include "BinaryTreeLevelOrderTraversal.cc"

TEST(BinaryTreeLevelOrderTraversal, TestA) {
  Solution sol;

  TreeNode *root1 = new TreeNode(3);
  vector<vector<int> > res1 = sol.levelOrder(root1);
  ASSERT_EQ(1, res1.size());
  ASSERT_EQ(3, res1[0][0]);
}
