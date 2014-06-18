#include "gtest/gtest.h"
#include "PalindromePartitioning.cc"

TEST(PalindromePartitioning, TestA) {
  Solution sol;
  string s1 = "aab";
  vector<vector<string> > res1 = sol.partition(s1);

  ASSERT_EQ(2, res1.size());
}
