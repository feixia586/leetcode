#include "gtest/gtest.h"
#include "ReverseLinkedListII.cc"

TEST(ReverseLinkedListII, TestA) {
  Solution sol;

  ListNode *head1 = new ListNode(1);
  ListNode *p = head1;
  p->next = new ListNode(2); p = p->next;
  p->next = new ListNode(3); p = p->next;
  p->next = new ListNode(4); p = p->next;
  p->next = new ListNode(5);
  ListNode *res1 = sol.reverseBetween(head1, 2, 4);
  p = res1;
  ASSERT_EQ(1, p->val); p = p->next;
  ASSERT_EQ(4, p->val); p = p->next;
  ASSERT_EQ(3, p->val); p = p->next;
  ASSERT_EQ(2, p->val); p = p->next;
  ASSERT_EQ(5, p->val); p = p->next;
  ASSERT_TRUE(p == NULL);

  ListNode *head2 = new ListNode(5);
  ListNode* res2 = sol.reverseBetween(head2, 1, 1);
  ASSERT_EQ(5, res2->val);
  ASSERT_TRUE(res2->next == NULL);
}
