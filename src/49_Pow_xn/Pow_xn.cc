class Solution {
public:
  double pow(double x, int n) {
    if (n == 0) return 1.0;

    // Store pow(x, n/2) is necessary, in that it gives less time complexity -- O(logn)
    // Otherweise, you need to compute pow(x, n/2) twice under each condition,
    // which is O(n)
    double half = pow(x, n/2);
    if (n % 2 == 0)
      return half * half;
    else {
      if (n > 0) return half * half * x;
      else return half * half / x;
    }
  }
};
