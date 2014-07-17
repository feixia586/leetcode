#include "gtest/gtest.h"
#include "MaximalRectangle.cc"

TEST(MaximalRectangle, TestA) {
  Solution sol;
  vector<vector<char> > s(1, vector<char>(1, '0'));
  sol.maximalRectangle(s);
}
