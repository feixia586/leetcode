#include "gtest/gtest.h"
#include "SameTree.cc"

TEST(SameTree, TestA) {
  Solution sol;
  TreeNode *p1 = new TreeNode(3); p1->left = new TreeNode(9);
  TreeNode *q1 = new TreeNode(3); q1->left = new TreeNode(8);
  bool res1 = sol.isSameTree(p1, q1);
  ASSERT_FALSE(res1);
}
