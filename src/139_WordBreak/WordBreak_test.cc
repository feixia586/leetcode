#include "gtest/gtest.h"
#include "WordBreak.cc"

TEST(WordBreak, TestA) {
  Solution sol;
  string s1 = "leetcode";
  unordered_set<string> dict1;
  dict1.insert("leet");
  dict1.insert("code");
  bool res1 = sol.wordBreak(s1, dict1);
  ASSERT_TRUE(res1);
}
