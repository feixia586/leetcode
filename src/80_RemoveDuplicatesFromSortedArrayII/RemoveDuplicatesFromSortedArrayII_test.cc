#include "gtest/gtest.h"
#include "RemoveDuplicatesFromSortedArrayII.cc"

TEST(RemoveDuplicatesFromSortedArrayII, TestA) {
  Solution sol;
  int A1[] = {1, 1, 1, 2, 2, 3};
  int n = 6;

  int res1 = sol.removeDuplicates(A1, n);
  ASSERT_EQ(5, res1);
  for (int i = 0; i < res1; i++) {
    cout << A1[i] << " ";
  }
  cout << endl;
}
