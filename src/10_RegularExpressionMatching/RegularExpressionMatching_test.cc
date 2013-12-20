#include "gtest/gtest.h"
#include "RegularExpressionMatching.cc"

TEST(RegularExpressionMatching, TestA) {
  Solution sol;

  char s1[] = "aab";
  char p1[] = "c*a*b";
  bool res1 = sol.isMatch(s1, p1);
  ASSERT_TRUE(res1);

  char s2[] = "aa";
  char p2[] = ".*";
  bool res2 = sol.isMatch(s2, p2);
  ASSERT_TRUE(res2);

  char s3[] = "acaabbaccbbacaabbbb";
  char p3[] = "a*.*b*.*a*aa*a*";
  bool res3 = sol.isMatch(s3, p3);
  ASSERT_FALSE(res3);
}
