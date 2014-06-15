#include "gtest/gtest.h"
#include "RemoveDuplicatesFromSortedList.cc"

TEST(RemoveDuplicatesFromSortedList, TestA) {
  Solution sol;
  ListNode *head1= new ListNode(1);
  head1->next = new ListNode(1);
  ListNode *res1 = sol.deleteDuplicates(head1);

  ASSERT_EQ(1, res1->val);
  ASSERT_EQ(NULL, res1->next);
}
