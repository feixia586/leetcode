#include "gtest/gtest.h"
#include "LongestValidParentheses.cc"

TEST(LongestValidParentheses, TestA) {
  Solution sol;

  int res1 = sol.longestValidParentheses("(()");
  ASSERT_EQ(2, res1);

  int res2 = sol.longestValidParentheses(")()())");
  ASSERT_EQ(4, res2);

  int res3 = sol.longestValidParentheses("()(()");
  ASSERT_EQ(2, res3);
}
