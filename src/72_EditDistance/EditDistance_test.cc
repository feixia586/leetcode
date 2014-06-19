#include "gtest/gtest.h"
#include "EditDistance.cc"

TEST(EditDistance, TestA) {
  Solution sol;
  string w11 = "ab", w12 = "b";
  int res1 = sol.minDistance(w11, w12);
  ASSERT_EQ(1, res1);
}
