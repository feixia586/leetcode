#include "gtest/gtest.h"
#include "ConstructBinaryTreeFromInorderAndPostorderTraversal.cc"

TEST(ConstructBinaryTreeFromInorderAndPostorderTraversal, TestA) {
  Solution sol;
  vector<int> postorder1(1, -1);
  vector<int> inorder1(1, -1);
  TreeNode *res1 = sol.buildTree(inorder1, postorder1);
  ASSERT_EQ(-1, res1->val);
  ASSERT_EQ(NULL, res1->left);
  ASSERT_EQ(NULL, res1->right);
}
