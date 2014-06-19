#include "gtest/gtest.h"
#include "InterleavingString.cc"

TEST(InterleavingString, TestA) {
  Solution sol;
  string s11= "aabcc", s12 = "dbbca", s13 = "aadbbcbcac";
  bool res1 = sol.isInterleave(s11, s12, s13);
  ASSERT_TRUE(res1);
}
