#include "gtest/gtest.h"
#include "TextJustification.cc"

TEST(TextJustification, TestA) {
  Solution sol;

  vector<string> words1;
  words1.push_back("This");
  words1.push_back("is");
  words1.push_back("an");
  words1.push_back("exam");
  vector<string> res1 = sol.fullJustify(words1, 5);
  ASSERT_EQ(3, res1.size());
}
