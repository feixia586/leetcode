#include "gtest/gtest.h"
#include "ScrambleString.cc"

TEST(ScrambleString, TestA) {
  Solution sol;
  bool res1 = sol.isScramble("rgtae", "great");
  ASSERT_TRUE(res1);
}
