#include "gtest/gtest.h"
#include "WordSearch.cc"

TEST(WordSearch, TestA) {
  Solution sol;

  vector<vector<char> > board1(2, vector<char>(2, 'A'));
  string word1 = "AAA";
  bool res1 = sol.exist(board1, word1);
  ASSERT_TRUE(res1);
}
