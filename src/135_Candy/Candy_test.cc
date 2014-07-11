#include "gtest/gtest.h"
#include "Candy.cc"

TEST(Candy, TestA) {
  Solution sol;
  vector<int> ratings1;
  ratings1.push_back(1);
  ratings1.push_back(3);
  ratings1.push_back(9);
  ratings1.push_back(4);
  ratings1.push_back(2);
  int res1 = sol.candy(ratings1);
  ASSERT_EQ(9, res1);
}
