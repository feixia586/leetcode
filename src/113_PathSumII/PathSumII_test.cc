#include "gtest/gtest.h"
#include "PathSumII.cc"

TEST(PathSumII, TestA) {
  Solution sol;
  TreeNode *root1 = new TreeNode(3);
  root1->left = new TreeNode(4);
  root1->right = new TreeNode(4);
  vector<vector<int> > res = sol.pathSum(root1, 7);
  ASSERT_EQ(2, res.size());
}
