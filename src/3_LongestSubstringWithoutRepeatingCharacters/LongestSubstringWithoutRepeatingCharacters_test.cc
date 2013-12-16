#include "gtest/gtest.h"
#include "LongestSubstringWithoutRepeatingCharacters.cc"

TEST(LongestSubstringWithoutRepeatingCharacters, TestA) {
  Solution sol;

  string str1 = "bbbb";
  int res1 = sol.lengthOfLongestSubstring(str1);
  ASSERT_EQ(1, res1);

  string str2 = "abcabcbb";
  int res2 = sol.lengthOfLongestSubstring(str2);
  ASSERT_EQ(3, res2);
}
