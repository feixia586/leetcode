#include "gtest/gtest.h"
#include "GenerateParentheses.cc"
#include <iostream>

TEST(GenerateParentheses, TestA) {
  Solution sol;

  int n1 = 3;
  vector<string> res1 = sol.generateParenthesis(n1);
  ASSERT_EQ(5, res1.size());
  for (size_t i = 0; i < res1.size(); i++)
    std::cout << res1[i] << endl;
}
