#include "gtest/gtest.h"
#include "0_start/helloworld.h"

TEST(HelloWorld, SimpleTest) {
  HelloWorld helloworld;
  helloworld.use_priority_queue();
  helloworld.use_shift();
}
