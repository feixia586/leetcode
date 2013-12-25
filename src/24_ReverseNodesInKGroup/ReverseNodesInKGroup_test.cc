#include "gtest/gtest.h"
#include "ReverseNodesInKGroup.cc"

TEST(ReverseNodesInKGroup, TestA) {
  Solution sol;

  ListNode *head1 = new ListNode(1);
  ListNode *p = head1;
  for (int i = 1; i < 5; i++) {
    p->next = new ListNode(i+1);
    p = p->next;
  }
  int k1 = 2;
  ListNode *res1 = sol.reverseKGroup(head1, k1);
  ListNode *q = res1;
  ASSERT_EQ(2, q->val); q = q->next;
  ASSERT_EQ(1, q->val); q = q->next;
  ASSERT_EQ(4, q->val); q = q->next;
  ASSERT_EQ(3, q->val); q = q->next;
  ASSERT_EQ(5, q->val); q = q->next;
  ASSERT_TRUE(q == NULL);
}
