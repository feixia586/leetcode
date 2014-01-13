#include "gtest/gtest.h"
#include "ReorderList.cc"

TEST(ReorderList, TestA) {
  Solution sol;

  ListNode *head1 = new ListNode(1);
  ListNode *p = head1;
  p->next = new ListNode(2); p = p->next;
  p->next = new ListNode(3); p = p->next;
  p->next = new ListNode(4);
  sol.reorderList(head1);
  p = head1;
  ASSERT_EQ(1, p->val); p = p->next;
  ASSERT_EQ(4, p->val); p = p->next;
  ASSERT_EQ(2, p->val); p = p->next;
  ASSERT_EQ(3, p->val); p = p->next;
  ASSERT_TRUE(p == NULL);
}
