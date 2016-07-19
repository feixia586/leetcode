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
    
    // More reliable version, since "res >= 0" in the above code doesn't guarantee it doesn't have overflow.
    // Note that -127 % 10 = -7, -127 / 10 = -12.
    int reverse(int x) {
      int sign = (x >= 0 ? 1 : -1);
        
      int res = 0;
      while (x != 0) {
        int digit = x % 10;
        if (sign > 0 && res > INT_MAX / 10 || (res == INT_MAX / 10 && digit > INT_MAX % 10)) {
          return 0;
        }
        if (sign < 0 && res < INT_MIN / 10 || (res == INT_MIN / 10 && digit < INT_MIN % 10)) {
          return 0;
        }
            
        res = res * 10 + digit;
        x = x / 10;
      }
        
      return res;
    }
};
