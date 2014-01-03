#include "gtest/gtest.h"
#include "InsertInterval.cc"

TEST(InsertInterval, TestA) {
  Solution sol;

  Interval it1(1, 3), it2(6, 9);
  Interval newIt1(2, 5);
  vector<Interval> its1; its1.push_back(it1); its1.push_back(it2);
  vector<Interval> res = sol.insert(its1, newIt1);
  ASSERT_EQ(2, res.size());
}
