#include "gtest/gtest.h"
#include "SetMatrixZeroes.cc"

TEST(SetMatrixZeroes, TestA) {
  Solution sol;
  vector<vector<int> > matrix1;
  vector<int> row11; row11.push_back(1); row11.push_back(2);
  vector<int> row12(2, 0);
  matrix1.push_back(row11);
  matrix1.push_back(row12);
  sol.setZeroes(matrix1);
  ASSERT_EQ(0, matrix1[0][0]);
  ASSERT_EQ(0, matrix1[0][1]);
  ASSERT_EQ(0, matrix1[1][0]);
  ASSERT_EQ(0, matrix1[1][1]);
}
