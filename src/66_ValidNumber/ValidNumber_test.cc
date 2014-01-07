#include "gtest/gtest.h"
#include "ValidNumber.cc"

TEST(ValidNumber, TestA) {
  Solution sol;

  char s1[] = " 0.1 ";
  ASSERT_TRUE(sol.isNumber(s1));
}
