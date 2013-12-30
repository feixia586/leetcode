#include "gtest/gtest.h"
#include "PermutationsII.cc"

TEST(Permutation, TestA) {
  Solution sol;

  vector<int> num1;
  num1.push_back(3); num1.push_back(3);
  vector<vector<int> > res = sol.permuteUnique(num1);
  ASSERT_EQ(1, res.size());
  ASSERT_EQ(2, res[0].size());
}
