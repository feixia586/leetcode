#include "gtest/gtest.h"
#include "SearchA2DMatrix.cc"

TEST(SearchA2DMatrix, TestA) {
  Solution sol;

  vector<vector<int> > matrix;
  vector<int> row1, row2, row3;
  row1.push_back(1); row1.push_back(3);
  row1.push_back(5); row1.push_back(7);
  row2.push_back(10); row2.push_back(11);
  row2.push_back(16); row2.push_back(20);
  row3.push_back(23); row3.push_back(30);
  row3.push_back(34); row3.push_back(50);

  matrix.push_back(row1);
  matrix.push_back(row2);
  matrix.push_back(row3);

  bool res = sol.searchMatrix(matrix, 10);
  ASSERT_TRUE(res);
}
