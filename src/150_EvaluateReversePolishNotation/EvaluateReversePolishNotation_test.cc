#include "gtest/gtest.h"
#include "EvaluateReversePolishNotation.cc"

TEST(EvaluateReversePolishNotation, TestA) {
  Solution sol;
  vector<string> tokens1;
  tokens1.push_back("4");
  tokens1.push_back("13");
  tokens1.push_back("5");
  tokens1.push_back("/");
  tokens1.push_back("+");
  int res1 = sol.evalRPN(tokens1);
  ASSERT_EQ(6, res1);
}
