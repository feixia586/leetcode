#include "gtest/gtest.h"
#include "ZigZagConversion.cc"

TEST(ZigZagConversion, TestA) {
  Solution sol;

  string str1 = "ABCD";
  string res1 = sol.convert(str1, 2);
  ASSERT_EQ("ACBD", res1);

  string str2 = "PAYPALISHIRING";
  string res2 = sol.convert(str2, 3);
  ASSERT_EQ("PAHNAPLSIIGYIR", res2);
}
