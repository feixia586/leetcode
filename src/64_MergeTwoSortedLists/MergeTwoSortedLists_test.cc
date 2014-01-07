#include "gtest/gtest.h"
#include "MergeTwoSortedLists.cc"

TEST(MergeTwoSortedLists, TestA) {
  Solution sol;

  ListNode *l1 = new ListNode(5);
  ListNode *l2 = new ListNode(4);
  ListNode *res1 = sol.mergeTwoLists(l1, l2);
  ASSERT_EQ(4, res1->val);
  ASSERT_EQ(5, res1->next->val);
  ASSERT_EQ(NULL, res1->next->next);
}
