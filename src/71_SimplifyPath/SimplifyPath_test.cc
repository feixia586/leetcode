#include "gtest/gtest.h"
#include "SimplifyPath.cc"

TEST(SimplifyPath, TestA) {
  Solution sol;
  string res1 = sol.simplifyPath("/a/./b/../../c/");
  ASSERT_EQ("/c", res1);

  string res2 = sol.simplifyPath("/../");
  ASSERT_EQ("/", res2);
}
