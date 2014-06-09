#include "gtest/gtest.h"
#include "Subsets.cc"

TEST(Subsets, TestA) {
  Solution sol;

  vector<int> S1;
  S1.push_back(2); S1.push_back(1);
  vector<vector<int> > result = sol.subsets(S1);
  for (size_t i = 0; i < result.size(); i++) {
    vector<int> tmp = result[i];
    for (size_t j = 0; j < tmp.size(); j++) {
      cout << tmp[j] << " ";
    }
    cout << endl;
  }

  ASSERT_EQ(4, result.size());
}
