#include "gtest/gtest.h"
#include "ValidParenttheses.cc"

TEST(ValidParenttheses, TestA) {
  Solution sol;

  string s1 = "[({(())}[()])]";
  bool res1 = sol.isValid(s1);
  ASSERT_TRUE(res1);

  string s2 = "[])";
  bool res2 = sol.isValid(s2);
  ASSERT_FALSE(res2);
}
