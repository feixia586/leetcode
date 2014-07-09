#include "gtest/gtest.h"
#include "BestTimeToBuyAndSellStockIII.cc"

TEST(BestTimeToBuyAndSellStockIII, TestA) {
  Solution sol;

  vector<int> prices1;
  prices1.push_back(2); prices1.push_back(4);
  prices1.push_back(9); prices1.push_back(3);
  prices1.push_back(6);
  int res1 = sol.maxProfit(prices1);
  ASSERT_EQ(10, res1);
}
