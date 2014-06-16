#include "gtest/gtest.h"
#include "RemoveDuplicatesFromSortedListII.cc"

TEST(RemoveDuplicatesFromSortedListII, TestA) {
  Solution sol;
  ListNode *head1= new ListNode(1);
  head1->next = new ListNode(1);
  ListNode *res1 = sol.deleteDuplicates(head1);

  ASSERT_EQ(NULL, res1);
}
