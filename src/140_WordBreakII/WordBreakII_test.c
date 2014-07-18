#include "gtest/gtest.h"
#include "WordBreakII.cc"

TEST(WordBreakII, TestA) {
  Solution sol;

  string s1 = "catsanddog";
  unordered_set<string> dict1;
  dict1.insert("cat");
  dict1.insert("cats");
  dict1.insert("and");
  dict1.insert("sand");
  dict1.insert("dog");

  vector<string> res1 = sol.wordBreak(s1, dict1);
  ASSERT_EQ(2, res1.size());
}
