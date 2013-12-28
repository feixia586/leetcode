#include "gtest/gtest.h"
#include "CombinationSum.cc"

TEST(CombinationSum, TestA) {
  Solution sol;

  vector<int> candidates1;
  candidates1.push_back(2);
  vector<vector<int> > res1 = sol.combinationSum(candidates1, 1);
  ASSERT_EQ(0, res1.size());

  vector<int> candidates2;
  candidates2.push_back(2); candidates2.push_back(3);
  candidates2.push_back(6); candidates2.push_back(7);
  vector<vector<int> > res2 = sol.combinationSum(candidates2, 7);
  ASSERT_EQ(2, res2.size());
  ASSERT_TRUE((res2[0].size() == 1 && res2[1].size() == 3) || (res2[0].size() == 3 && res2[1].size() == 1));
  if (res2[0].size() == 1 && res2[1].size() == 3) {
    ASSERT_EQ(7, res2[0][0]);
    ASSERT_EQ(2, res2[1][0]);
    ASSERT_EQ(2, res2[1][1]);
    ASSERT_EQ(3, res2[1][2]);
  } else {
    ASSERT_EQ(7, res2[1][0]);
    ASSERT_EQ(2, res2[0][0]);
    ASSERT_EQ(2, res2[0][1]);
    ASSERT_EQ(3, res2[0][2]);
  }
}
