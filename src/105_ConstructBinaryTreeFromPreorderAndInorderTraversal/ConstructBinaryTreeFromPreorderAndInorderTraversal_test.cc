#include "gtest/gtest.h"
#include "ConstructBinaryTreeFromPreorderAndInorderTraversal.cc"

TEST(ConstructBinaryTreeFromPreorderAndInorderTraversal, TestA) {
  Solution sol;
  vector<int> preorder1(1, -1);
  vector<int> inorder1(1, -1);
  TreeNode *res1 = sol.buildTree(preorder1, inorder1);
  ASSERT_EQ(-1, res1->val);
  ASSERT_EQ(NULL, res1->left);
  ASSERT_EQ(NULL, res1->right);
}
