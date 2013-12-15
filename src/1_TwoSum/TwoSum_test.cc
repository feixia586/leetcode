#include "gtest/gtest.h"
#include "TwoSum.cc"

TEST(TwoSum, TestA) {
  Solution sol;
  //vec1 {2, 7, 11, 15};
  vector<int> vec1;
  vec1.push_back(2);
  vec1.push_back(7);
  vec1.push_back(11);
  vec1.push_back(15);
  int target1 = 9;
  vector<int> vec_res = sol.twoSum(vec1, target1);
  ASSERT_EQ(2, vec_res.size());
  ASSERT_EQ(1, vec_res[0]);
  ASSERT_EQ(2, vec_res[1]);
}
