#include "gtest/gtest.h"
#include "LRUCache.cc"

TEST(LRUCache, TestA) {
  LRUCache cache(100);

  int key1 = 3, val1 = 8;

  int res1 = cache.get(key1);
  ASSERT_EQ(-1, res1);

  cache.set(key1, val1);
  int res2 = cache.get(key1);
  ASSERT_EQ(8, res2);
}
