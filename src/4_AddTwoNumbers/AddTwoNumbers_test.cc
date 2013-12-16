#include "gtest/gtest.h"
#include "AddTwoNumbers.cc"

TEST(AddTwoNumbers, TestA) {
  Solution sol;

  ListNode* l1 = new ListNode(1);
  ListNode* l2 = new ListNode(9);
  ListNode* q2 = l2;
  q2->next = new ListNode(9); q2 = q2->next;
  q2->next = new ListNode(9); q2 = q2->next;

  ListNode* res = sol.addTwoNumbers(l1, l2);
  ListNode* rq = res;

  for (int i = 0; i < 3; i++) {
    ASSERT_TRUE(rq != NULL);
    ASSERT_EQ(0, rq->val);
    rq = rq->next;
  }
  ASSERT_EQ(1, rq->val);
  rq = rq->next;
  ASSERT_TRUE(rq == NULL);
}
