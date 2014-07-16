#include "gtest/gtest.h"
#include "PopulatingNextRightPointersInEachNodeII.cc"

TEST(PopulatingNextRightPointersInEachNodeII, TestA) {
  Solution sol;
  TreeLinkNode *root1 = new TreeLinkNode(0);
  sol.connect(root1);
  ASSERT_EQ(NULL, root1->next);
}
