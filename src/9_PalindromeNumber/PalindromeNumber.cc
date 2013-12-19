#include <cmath>

class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0)
      return false;

    int len = 0;
    int tmp = x;
    while (tmp != 0) {
      tmp /= 10;
      len++;
    }

    if (len == 0 || len == 1)
      return true;

    while (len > 1) {
      int last = x % 10;
      x = x / 10;
      int magnitude = pow(10.0, len-2);
      int first = x / magnitude;
      x -= first * magnitude;
      if (last != first)
        return false;
      len -= 2;
    }

    return true;
  }
};
