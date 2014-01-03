#include "gtest/gtest.h"
#include "LengthOfLastWord.cc"

TEST(LengthOfLastWord, TestA) {
  Solution sol;

  char s1[] = "Hello World";
  int res1 = sol.lengthOfLastWord(s1);
  ASSERT_EQ(5, res1);
}
