#include "gtest/gtest.h"
#include "MultiplyStrings.cc"

TEST(MultiplyStrings, TestA) {
  Solution sol;

  string res1 = sol.multiply("0", "376");
  ASSERT_EQ("0", res1);

  string res2 = sol.multiply("572", "324");
  ASSERT_EQ("185328", res2);
}
