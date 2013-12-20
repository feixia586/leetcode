#include "gtest/gtest.h"
#include "IntegerToRoman.cc"

TEST(IntegerToRoman, TestA) {
  Solution sol;

  int num1 = 2013;
  string res1 = sol.intToRoman(num1);
  ASSERT_EQ("MMXIII", res1);
}
