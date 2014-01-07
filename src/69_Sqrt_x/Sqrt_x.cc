#include <cassert>

class Solution {
public:
  int sqrt(int x) {
    assert(x >= 0);
    if (x == 0 || x == 1) return x;

    // binary search
    int low = 0, high = x;
    while(low <= high) {
      long long mid = (low + high) / 2;
      long long val = mid * mid;
      if (val == x) return mid;

      if (val < x) low = mid + 1;
      else high = mid - 1;
    }

    return low - 1;
  }
};
