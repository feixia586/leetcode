#include "gtest/gtest.h"
#include "UniqueBinarySearchTreesII.cc"

TEST(UniqueBinarySearchTreesII, TestA) {
  Solution sol;

  vector<TreeNode *> res1 = sol.generateTrees(3);
  ASSERT_EQ(5, res1.size());

  vector<TreeNode *> res2 = sol.generateTrees(4);
  ASSERT_EQ(14, res2.size());
}
