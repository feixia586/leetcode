#include "gtest/gtest.h"
#include "SpiralMatrix.cc"

TEST(SpiralMatrix, TestA) {
  Solution sol;

  vector<int> row1; row1.push_back(1); row1.push_back(2); row1.push_back(3);
  vector<int> row2; row2.push_back(8); row2.push_back(9); row2.push_back(4);
  vector<int> row3; row3.push_back(7); row3.push_back(6); row3.push_back(5);
  vector<vector<int> > matrix1;
  matrix1.push_back(row1); matrix1.push_back(row2); matrix1.push_back(row3);
  vector<int> res1 = sol.spiralOrder(matrix1);
  for (int i = 0; i < 9; i++)
    ASSERT_EQ(i+1, res1[i]);
}
