#include "gtest/gtest.h"
#include "SortList.cc"

TEST(SortList, TestA) {
  Solution sol;

  ListNode *head1 = new ListNode(2);
  head1->next = new ListNode(1);
  ListNode *res1 = sol.sortList(head1);
  ASSERT_EQ(1, res1->val);
  ASSERT_EQ(2, res1->next->val);
  ASSERT_TRUE(res1->next->next == NULL);
}
