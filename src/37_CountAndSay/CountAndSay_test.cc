#include "gtest/gtest.h"
#include "CountAndSay.cc"

TEST(CountAndSay, TestA) {
  Solution sol;

  string res1 = sol.countAndSay(5);
  ASSERT_EQ("111221", res1);
}
