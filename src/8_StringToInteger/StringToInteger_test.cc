#include "gtest/gtest.h"
#include "StringToInteger.cc"

TEST(StringToInteger, TestA) {
  Solution sol;

  char str1[] = "  +23a43";
  int res1 = sol.atoi(str1);
  ASSERT_EQ(23, res1);

  char str2[] = "2147483648";
  int res2 = sol.atoi(str2);
  ASSERT_EQ(2147483647, res2);

  char str3[] = "-2147483648";
  int res3 = sol.atoi(str3);
  ASSERT_EQ(-2147483648, res3);
}
