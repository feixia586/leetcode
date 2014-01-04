#include "gtest/gtest.h"
#include "PermutationSequence.cc"

TEST(PermutationSequence, TestA) {
  Solution sol;

  string res1 = sol.getPermutation(2, 1);
  ASSERT_EQ("12", res1);

  string res2 = sol.getPermutation(3, 5);
  ASSERT_EQ("312", res2);
}
