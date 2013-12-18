#include "gtest/gtest.h"
#include "0_start/helloworld.h"

TEST(HelloWorld, SimpleTest) {
  int res1 = start(1, 2);
  ASSERT_EQ(3, res1);

  int res2 = start(0, 0);
  ASSERT_EQ(0, res2);
}
