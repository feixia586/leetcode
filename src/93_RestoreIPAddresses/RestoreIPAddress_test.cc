#include "gtest/gtest.h"
#include "RestoreIPAddress.cc"

TEST(RestoreIPAddress, TestA) {
  Solution sol;

  string s1 = "010010";
  vector<string> res1 = sol.restoreIpAddresses(s1);
  ASSERT_EQ(2, res1.size());
}
