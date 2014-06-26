#include "gtest/gtest.h"
#include "CloneGraph.cc"

TEST(CloneGraph, TestA) {
  Solution sol;

  UndirectedGraphNode *node1 = new UndirectedGraphNode(1);
  UndirectedGraphNode *res1 = sol.cloneGraph(node1);

  ASSERT_EQ(1, res1->label);
  ASSERT_EQ(0, res1->neighbors.size());
}
