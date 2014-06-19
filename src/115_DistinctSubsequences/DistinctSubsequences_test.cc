#include "gtest/gtest.h"
#include "DistinctSubsequences.cc"

TEST(DistinctSubsequences, TestA) {
  Solution sol;

  string s1 = "a", t1 = "b";
  int res1 = sol.numDistinct(s1, t1);
  ASSERT_EQ(0, res1);
}
