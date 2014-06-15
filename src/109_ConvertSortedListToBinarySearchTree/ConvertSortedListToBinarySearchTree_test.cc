#include "gtest/gtest.h"
#include "ConvertSortedListToBinarySearchTree.cc"

TEST(ConvertSortedListToBinarySearchTree, TestA) {
  Solution sol;

  ListNode *l1 = new ListNode(3);
  l1->next = new ListNode(5);
  l1->next->next = new ListNode(8);

  TreeNode *res1 = sol.sortedListToBST(l1);
  ASSERT_EQ(5, res1->val);
  ASSERT_EQ(3, res1->left->val);
  ASSERT_EQ(8, res1->right->val);
}
