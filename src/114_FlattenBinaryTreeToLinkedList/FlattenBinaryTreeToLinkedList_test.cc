#include "gtest/gtest.h"
#include "FlattenBinaryTreeToLinkedList.cc"


TEST(FlattenBinaryTreeToLinkedList, TestA) {
  Solution sol;

  TreeNode *root1 = new TreeNode(3);
  root1->left = new TreeNode(4);
  sol.flatten(root1);

  ASSERT_EQ(3, root1->val);
  ASSERT_EQ(NULL, root1->left);
  ASSERT_EQ(4, root1->right->val);
  ASSERT_EQ(NULL, root1->right->left);
  ASSERT_EQ(NULL, root1->right->right);
}
