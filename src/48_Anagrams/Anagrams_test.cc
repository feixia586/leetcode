#include "gtest/gtest.h"
#include "Anagrams.cc"

TEST(Anagrams, TestA) {
  Solution sol;

  vector<string> strs1;
  strs1.push_back("abc");
  strs1.push_back("cad");
  strs1.push_back("bca");
  vector<string> res1 = sol.anagrams(strs1);
  ASSERT_EQ(2, res1.size());
}
