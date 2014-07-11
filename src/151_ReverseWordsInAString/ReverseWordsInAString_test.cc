#include "gtest/gtest.h"
#include "ReverseWordsInAString.cc"

TEST(ReverseWordsInAString, TestA) {
  Solution sol;

  string s1 = "  the sky is  blue ";
  sol.reverseWords(s1);
  ASSERT_EQ("blue is sky the", s1);
}
