#include "gtest/gtest.h"
#include "PalindromePartitioningII.cc"

TEST(PalindromePartitioningII, TestA) {
  Solution sol;

  string s1 = "aab";
  int res1 = sol.minCut(s1);
  ASSERT_EQ(1, res1);

  string s2 = "aba";
  int res2 = sol.minCut(s2);
  ASSERT_EQ(0, res2);
}
