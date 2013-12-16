#include "gtest/gtest.h"
#include "MedianOfTwoSortedArrays.cc"

TEST(MedianOfTwoSortedArrays, TestA) {
  Solution sol;

  int m = 0, n = 2;
  int* A = NULL;
  int* B = new int[n];
  B[0] = 2;
  B[1] = 3;

  double res = sol.findMedianSortedArrays(A, m, B, n);
  ASSERT_EQ(2.5, res);
}
TEST(MedianOfTwoSortedArrays, TestB) {
  Solution sol;

  int m = 1, n = 1;
  int A[1] = {1};
  int B[1] = {1};
  double res = sol.findMedianSortedArrays(A, m, B, n);
  ASSERT_EQ(1, res);
}
