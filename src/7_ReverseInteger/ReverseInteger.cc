#include <assert.h>

using namespace std;

class Solution {
  public:
    // actually we don't need to deal with the "sign" stuff,
    // since the sign will be kept during the operation
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
