#include "gtest/gtest.h"
#include "MergeKSortedLists.cc"

TEST(MergeKSortedLists, TestA) {
  Solution sol;

  vector<ListNode*> lists1;
  lists1.push_back(new ListNode(1));
  lists1.push_back(new ListNode(0));
  ListNode* res1 = sol.mergeKLists(lists1);
  ASSERT_EQ(0, res1->val);
  ASSERT_EQ(1, res1->next->val);
  ASSERT_TRUE(res1->next->next == NULL);

  vector<ListNode*> list2;
  list2.push_back(NULL);
  list2.push_back(NULL);
  ListNode* res2 = sol.mergeKLists(list2);
  ASSERT_TRUE(res2 == NULL);
}
