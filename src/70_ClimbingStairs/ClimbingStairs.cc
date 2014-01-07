#include <cassert>
#include <vector>

using namespace std;

class Solution {
public:
  int climbStairs(int n) {
    // return recurse(n);

    return DP(n);
  }

  /*************************************************************
   * Divide and Conquer. Timeout
   *************************************************************/
  int recurse(int n) {
    if (n < 0) return 0;
    else if (n == 0 || n == 1) return 1;

    return recurse(n-1) + recurse(n-2);
  }

  /*************************************************************
   * Dynamic Programming.
   *************************************************************/
  int DP(int n) {
    assert(n >= 0);
    vector<int> arr(n+1, 0);
    arr[0] = 1; arr[1] = 1;
    for (int i = 2; i <= n; i++)
      arr[i] = arr[i-1] + arr[i-2];

    return arr[n];
  }
};
