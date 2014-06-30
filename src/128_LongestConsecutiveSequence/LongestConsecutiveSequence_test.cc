#include "gtest/gtest.h"
#include "LongestConsecutiveSequence.cc"

TEST(LongestConsecutiveSequence, TestA) {
  Solution sol;

  vector<int> num1;
  num1.push_back(100); num1.push_back(4); num1.push_back(200);
  num1.push_back(1); num1.push_back(3); num1.push_back(2);
  int res1 = sol.longestConsecutive(num1);
  ASSERT_EQ(4, res1);
}
