#include "gtest/gtest.h"
#include "LinkedListCycle.cc"

TEST(LinkedListCycle, TestA) {
  Solution sol;

  ListNode *head1 = new ListNode(2);
  head1->next = new ListNode(3);
  bool res1 = sol.hasCycle(head1);
  ASSERT_FALSE(res1);
}
