#include "gtest/gtest.h"
#include "RotateImage.cc"

TEST(RotateImage, TestA) {
  Solution sol;
  vector<int> row1;
  row1.push_back(1); row1.push_back(2);
  vector<int> row2;
  row2.push_back(3); row2.push_back(4);
  vector<vector<int> > matrix1;
  matrix1.push_back(row1); matrix1.push_back(row2);

  sol.rotate(matrix1);
  ASSERT_EQ(3, matrix1[0][0]);
  ASSERT_EQ(1, matrix1[0][1]);
  ASSERT_EQ(4, matrix1[1][0]);
  ASSERT_EQ(2, matrix1[1][1]);

}
