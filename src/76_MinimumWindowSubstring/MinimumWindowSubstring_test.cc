#include "gtest/gtest.h"
#include "MinimumWindowSubstring.cc"

TEST(MinimumWindowSubstring, TestA) {
  Solution sol;

  string S1 = "ADOBECODEBANC";
  string T1 = "ABC";
  string res1 = sol.minWindow(S1, T1);
  ASSERT_EQ("BANC", res1);
}
