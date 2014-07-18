#include "gtest/gtest.h"
#include "ValidNumber.cc"

TEST(ValidNumber, TestA) {
  Solution sol;

  char s1[] = " 005047e+6";
  bool res1 = sol.isNumber(s1);
  ASSERT_TRUE(res1);
}
