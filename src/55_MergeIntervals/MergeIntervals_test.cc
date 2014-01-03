#include "gtest/gtest.h"
#include "MergeIntervals.cc"

TEST(MergeIntervals, TestA) {
  Solution sol;

  Interval it1(1, 4);
  Interval it2(4, 5);
  vector<Interval> its1; its1.push_back(it1); its1.push_back(it2);
  vector<Interval> res1 = sol.merge(its1);
  ASSERT_EQ(1, res1.size());
}
