#include "gtest/gtest.h"
#include "RomanToInteger.cc"

TEST(RomanToInteger, TestA) {
  Solution sol;
  string str1 = "MMXIII";
  int res1 = sol.romanToInt(str1);
  ASSERT_EQ(2013, res1);
}
