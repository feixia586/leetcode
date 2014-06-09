#include "gtest/gtest.h"
#include "SubsetsII.cc"

TEST(SubsetsII, TestA) {
  Solution sol;

  vector<int> S1;
  S1.push_back(2); S1.push_back(1); S1.push_back(2);
  vector<vector<int> > res1 = sol.subsetsWithDup(S1);

  ASSERT_EQ(6, res1.size());
}
