#include "gtest/gtest.h"
#include "GasStation.cc"

TEST(GasStation, TestA) {
  Solution sol;

  vector<int> gas1;
  vector<int> cost1;
  gas1.push_back(5); gas1.push_back(2); gas1.push_back(3);
  cost1.push_back(4); cost1.push_back(2); cost1.push_back(4);
  int res1 = sol.canCompleteCircuit(gas1, cost1);
  ASSERT_EQ(0, res1);
}
