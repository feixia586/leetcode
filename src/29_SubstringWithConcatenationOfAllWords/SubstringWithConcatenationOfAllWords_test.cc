#include "gtest/gtest.h"
#include "SubstringWithConcatenationOfAllWords.cc"

TEST(SubstringWithConcatenationOfAllWords, TestA) {
  Solution sol;

  string S1 = "barfoothefoobarman";
  vector<string> L1;
  L1.push_back("foo"); L1.push_back("bar");
  vector<int> res = sol.findSubstring(S1, L1);
  ASSERT_EQ(2, res.size());
}
