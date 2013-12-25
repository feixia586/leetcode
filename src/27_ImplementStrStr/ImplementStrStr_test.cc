#include "gtest/gtest.h"
#include "ImplementStrStr.cc"

TEST(ImplementStrStr, TestA) {
  Solution sol;

  char haystack1[] = "abcdef";
  char needle1[] = "cde";
  char* res1 = sol.strStr(haystack1, needle1);
  ASSERT_EQ(haystack1+2, res1);

  char haystack2[] = "";
  char needle2[] = "";
  char* res2 = sol.strStr(haystack2, needle2);
  ASSERT_EQ(haystack2, res2);
}
