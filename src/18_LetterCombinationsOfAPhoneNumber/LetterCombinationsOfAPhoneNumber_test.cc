#include "gtest/gtest.h"
#include "LetterCombinationsOfAPhoneNumber.cc"
#include <iostream>

const string Solution::d_str[10] = {" ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

TEST(LetterCombinationOfAPhoneNumber, TestA) {
  Solution sol;

  string digits1 = "23";
  vector<string> res1 = sol.letterCombinations(digits1);
  ASSERT_EQ(9, res1.size());
  for (size_t i = 0; i < res1.size(); i++)
    std::cout << res1[i] << "\t";
  std::cout << std::endl;
}
