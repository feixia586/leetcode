#include "gtest/gtest.h"
#include "MaxPointsOnALine.cc"

TEST(MaxPointsOnALine, TestA) {
  Solution sol;
  vector<Point> points1;
  points1.push_back(Point(0, 0));
  points1.push_back(Point(0, 0));
  int res1 = sol.maxPoints(points1);
  ASSERT_EQ(2, res1);
}
