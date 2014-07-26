#include <assert.h>

using namespace std;

class Solution {
  public:
    int reverse(int x) {
      int sign = x > 0 ? 1 : -1;
      x *= sign;

      int res = 0; 
      while (x != 0) {
        res = res * 10 + x % 10;
        x /= 10;
      }

      assert(res >= 0); // make sure it doesn't overflow

      res *= sign;

      return res;
    }
};
