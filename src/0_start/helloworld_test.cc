#include "gtest/gtest.h"
#include "0_start/helloworld.h"

TEST(HelloWorld, SimpleTest) {
  int res = start(1, 2);
  ASSERT_EQ(res, 3);
}
