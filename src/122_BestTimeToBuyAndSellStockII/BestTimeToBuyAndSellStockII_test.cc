#include "gtest/gtest.h"
#include "BestTimeToBuyAndSellStockII.cc"

TEST(BestTimeToBuyAndSellStockII, TestA) {
  Solution sol;
  vector<int> prices1;
  prices1.push_back(6); prices1.push_back(7);
  prices1.push_back(8); prices1.push_back(9);
  int res1 = sol.maxProfit(prices1);
  ASSERT_EQ(3, res1);
}
