#include "gtest/gtest.h"
#include "ValidPalindrome.cc"

TEST(ValidPalindrome, TestA) {
  Solution sol;
  bool res1 = sol.isPalindrome("1a2");
  ASSERT_FALSE(res1);
}
