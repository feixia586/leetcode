#include "gtest/gtest.h"
#include "LongestPalindromicSubstring.cc"

TEST(LongestPalindromicSubstring, TestA) {
  Solution sol;

  string str1 = "caba";
  string res1 = sol.longestPalindrome(str1);
  ASSERT_EQ("aba", res1);

  string str2 = "abacdfgdcaba";
  string res2 = sol.longestPalindrome(str2);

  string str3= "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
  string res3 = sol.longestPalindrome(str3);
  ASSERT_EQ("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", res3);

  string str4 = "";
  string res4 = sol.longestPalindrome(str4);
  ASSERT_EQ("", res4);

  string str5 = "a";
  string res5 = sol.longestPalindrome(str5);
  ASSERT_EQ("a", res5);

}
