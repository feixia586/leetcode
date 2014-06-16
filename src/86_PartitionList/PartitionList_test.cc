#include "gtest/gtest.h"
#include "PartitionList.cc"

TEST(PartitionList, TestA) {
  Solution sol;
  ListNode *head1 = new ListNode(1);
  head1->next = new ListNode(3);
  head1->next->next = new ListNode(2);
  ListNode* res1 = sol.partition(head1, 3);

  ASSERT_EQ(1, res1->val);
  ASSERT_EQ(2, res1->next->val);
  ASSERT_EQ(3, res1->next->next->val);
  ASSERT_EQ(NULL, res1->next->next->next);
}
