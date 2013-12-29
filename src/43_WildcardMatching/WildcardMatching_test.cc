#include "gtest/gtest.h"
#include "WildcardMatching.cc"

TEST(WildcardMatching, TestA) {
  Solution sol;

  bool res1 = sol.isMatch("aa", "a");
  ASSERT_FALSE(res1);

  bool res2 = sol.isMatch("abbabbbaabaaabbbbbabbabbabbbabbaaabbbababbabaaabbab", "*aabb***aa**a******aa*");
  ASSERT_TRUE(res2);

  bool res3 = sol.isMatch("babababbbabbbbaababaabbababbbbbabbabbbaaababaabbaab", "**abbaa***b*ba*a*b***b*a");
  ASSERT_FALSE(res3);

  bool res4 = sol.isMatch("aa", "aa");
  ASSERT_TRUE(res4);
}
