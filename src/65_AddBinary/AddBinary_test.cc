#include "gtest/gtest.h"
#include "AddBinary.cc"

TEST(AddBinary, TestA) {
  Solution sol;

  string res1 = sol.addBinary("0", "0");
  ASSERT_EQ("0", res1);

  string res2 = sol.addBinary("111", "1");
  ASSERT_EQ("1000", res2);
}
