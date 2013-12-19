class Solution {
public:
  int reverse(int x) {
    if (x == 0)
      return 0;

    int res = 0;
    int sign = x > 0 ? 1 : -1;

    int rem = 0;
    int quotient = x > 0 ? x : -1 * x;
    int tmp;
    while (quotient != 0) {
      tmp = quotient / 10;
      rem = quotient - tmp * 10;
      quotient /= 10;

      res = 10 * res + rem;
    }

    res *= sign;

    return res;
  }
};
