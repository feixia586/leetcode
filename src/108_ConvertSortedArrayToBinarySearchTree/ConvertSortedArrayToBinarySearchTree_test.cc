#include "gtest/gtest.h"
#include "ConvertSortedArrayToBinarySearchTree.cc"

TEST(ConvertSortedArrayToBinarySearchTree, TestA) {
  Solution sol;
  vector<int> num1;
  num1.push_back(3); num1.push_back(5); num1.push_back(7);
  TreeNode *res1 = sol.sortedArrayToBST(num1);
  ASSERT_EQ(5, res1->val);
  ASSERT_EQ(3, res1->left->val);
  ASSERT_EQ(7, res1->right->val);
}
