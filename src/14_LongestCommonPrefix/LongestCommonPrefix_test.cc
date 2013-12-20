#include "gtest/gtest.h"
#include "LongestCommonPrefix.cc"

TEST(LongestCommonPrefix, TestA) {
  Solution sol;

  vector<string> strs1;
  strs1.push_back("abcdef");
  strs1.push_back("abcdmg");
  strs1.push_back("abcdqo");
  string res1 = sol.longestCommonPrefix(strs1);
  ASSERT_EQ("abcd", res1);
}
