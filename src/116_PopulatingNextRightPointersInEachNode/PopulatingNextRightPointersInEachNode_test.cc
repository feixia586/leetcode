#include "gtest/gtest.h"
#include "PopulatingNextRightPointersInEachNode.cc"

TEST(PopulatingNextRightPointersInEachNode, TestA) {
  Solution sol;
  TreeLinkNode *root1 = new TreeLinkNode(0);
  sol.connect(root1);
  ASSERT_EQ(NULL, root1->next);
}
