#include "gtest/gtest.h"
#include "Sqrt_x.cc"
#include <iostream>

using namespace std;

TEST(Sqrt_x, TestA) {
  Solution sol;

  cout << "sizeof(int) = " << sizeof(int) << ", sizeof(long) = " << sizeof(long) << ", sizeof(long long)=" << sizeof(long long) << endl;

  int res1 = sol.sqrt(10);
  ASSERT_EQ(3, res1);

  int res2 = sol.sqrt(16);
  ASSERT_EQ(4, res2);
}
