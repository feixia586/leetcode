#include "gtest/gtest.h"
#include "DecodeWays.cc"

TEST(DecodeWays, TestA) {
  Solution sol;
  string s1 = "10";
  int res1 = sol.numDecodings(s1);
  ASSERT_EQ(1, res1);

  string s2 = "01";
  int res2 = sol.numDecodings(s2);
  ASSERT_EQ(0, res2);
}
