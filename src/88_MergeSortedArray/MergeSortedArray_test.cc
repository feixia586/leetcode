#include "gtest/gtest.h"
#include "MergeSortedArray.cc"

TEST(MergeSortedArray, TestA) {
  Solution sol;
  int *A = new int[10];
  for (int i = 0; i < 3; i++) {
    A[i] = 2 * i;
  }
  int B[] = {1, 3, 5};
  sol.merge(A, 3, B, 3);
  for (int i = 0; i < 6; i++) {
    ASSERT_EQ(i, A[i]);
  }
}
