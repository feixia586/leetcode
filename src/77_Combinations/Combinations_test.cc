#include "gtest/gtest.h"
#include "Combinations.cc"

TEST(Combinations, TestA) {
  Solution sol;

  vector<vector<int> > res1 = sol.combine(4, 2);
  ASSERT_EQ(6, res1.size());
}
