#include "gtest/gtest.h"
#include "BestTimeToBuyAndSellStock.cc"

TEST(BestTimeToBuyAndSellStock, TestA) {
  Solution sol;
  vector<int> prices1;
  prices1.push_back(6);
  prices1.push_back(9);
  prices1.push_back(1);
  prices1.push_back(5);
  int res1 = sol.maxProfit(prices1);
  ASSERT_EQ(4, res1);
}
