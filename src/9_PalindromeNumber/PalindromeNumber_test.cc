#include "gtest/gtest.h"
#include "PalindromeNumber.cc"

TEST(PalindromeNumber, TestA) {
  Solution sol;

  int x1 = 1001;
  bool res1 = sol.isPalindrome(x1);
  ASSERT_TRUE(res1);

  int x2 = 9999;
  bool res2 = sol.isPalindrome(x2);
  ASSERT_TRUE(res2);
}
