#include "gtest/gtest.h"
#include "Permutations.cc"

TEST(Permutation, TestA) {
  Solution sol;

  vector<int> num1;
  num1.push_back(3); num1.push_back(4);
  vector<vector<int> > res = sol.permute(num1);
  ASSERT_EQ(2, res.size());
  ASSERT_EQ(2, res[0].size());
  ASSERT_EQ(2, res[1].size());
}
