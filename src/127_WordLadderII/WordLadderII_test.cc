#include "gtest/gtest.h"
#include "WordLadderII.cc"

TEST(WordLadderII, TestA) {
  Solution sol;
  string start1 = "hot", end1 = "dog";
  unordered_set<string> dict1 = {"hot", "dog", "dot"};
  vector<vector<string> > res1 = sol.findLadders(start1, end1, dict1);

  ASSERT_EQ(1, res1.size());
}
