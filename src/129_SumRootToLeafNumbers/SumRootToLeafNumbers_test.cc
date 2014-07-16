#include "gtest/gtest.h"
#include "SumRootToLeafNumbers.cc"

TEST(SumRootToLeafNumbers, TestA) {
  Solution sol;

  TreeNode *root = new TreeNode(9);
  int res1 = sol.sumNumbers(root);
  ASSERT_EQ(9, res1);
}
