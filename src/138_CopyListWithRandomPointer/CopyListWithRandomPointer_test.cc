#include "gtest/gtest.h"
#include "CopyListWithRandomPointer.cc"

TEST(CopyListWithRandomPointer, TestA) {
  Solution sol;

  RandomListNode* head1 = new RandomListNode(1);
  RandomListNode* res1 = sol.copyRandomList(head1);

  ASSERT_NE(head1, res1);
  ASSERT_EQ(1, res1->label);
  ASSERT_EQ(NULL, res1->next);
  ASSERT_EQ(NULL, res1->random);
}
