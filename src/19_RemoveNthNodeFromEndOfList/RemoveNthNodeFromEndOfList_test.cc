#include "gtest/gtest.h"
#include "RemoveNthNodeFromEndOfList.cc"

TEST(RemoveNthNodeFromEndOfList, TestA) {
  Solution sol;

  ListNode* head1 = new ListNode(1);
  ListNode* p1 = head1;
  for (int i = 0; i < 4; i++) {
    p1->next = new ListNode(i+2);
    p1 = p1->next;
  }
  ListNode* res = sol.removeNthFromEnd(head1, 2);
  ListNode* q = res;
  for (int i = 0; i < 4; i++, q = q->next) {
    if (i < 3)
      ASSERT_EQ(i+1, q->val);
    else
      ASSERT_EQ(i+2, q->val);
  }
  ASSERT_TRUE(q == NULL);
}
