#include "gtest/gtest.h"
#include "WordLadder.cc"

TEST(WordLadder, TestA) {
  Solution sol;

  string start1 = "hit";
  string end1 = "cog";
  unordered_set<string> dict1 = {"hot", "dot", "dog", "lot", "log"};
  int res1 = sol.ladderLength(start1, end1, dict1);

  ASSERT_EQ(5, res1);
}
