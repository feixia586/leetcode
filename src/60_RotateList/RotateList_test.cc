#include "gtest/gtest.h"
#include "RotateList.cc"

TEST(RotateList, TestA) {
  Solution sol;

  ListNode *head1 = new ListNode(1);
  head1->next = new ListNode(2);
  ListNode *res1 = sol.rotateRight(head1, 0);
  ASSERT_EQ(1, res1->val);
  ASSERT_EQ(2, res1->next->val);

  ListNode *head2 = new ListNode(1);
  head2->next = new ListNode(2);
  ListNode *res2 = sol.rotateRight(head2, 2);
  ASSERT_EQ(1, res2->val);
  ASSERT_EQ(2, res2->next->val);

}
