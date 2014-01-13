#include "gtest/gtest.h"
#include "LinkedListCycleII.cc"

TEST(LinkedListCycleII, TestA) {
  Solution sol;

  ListNode *head1 = new ListNode(5);
  ListNode *res1 = sol.detectCycle(head1);
  ASSERT_TRUE(res1 == NULL);
}
