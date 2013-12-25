#include "gtest/gtest.h"
#include "RemoveElement.cc"

TEST(RemoveElement, TestA) {
  Solution sol;

  int A1[] = {1, 1, 2, 2, 3, 2};
  int n1 = 6;
  int elem1 = 2;
  int res1 = sol.removeElement(A1, n1, elem1);
  ASSERT_EQ(3, res1);
}
