#include "gtest/gtest.h"
#include "Triangle.cc"

TEST(Triangle, TestA) {
  Solution sol;
  vector<vector<int> > triangle1;
  vector<int> row11; row11.push_back(2);
  vector<int> row12; row12.push_back(3); row12.push_back(4);
  triangle1.push_back(row11); triangle1.push_back(row12);
  int res1 = sol.minimumTotal(triangle1);
  ASSERT_EQ(5, res1);
}
