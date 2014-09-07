#include <algorithm>
#include <vector>
#include <assert.h>

using namespace std;

class Solution {
public:
  bool canJump(int A[], int n) {
    return DP(A, n);
    // return greedy(A, n);
  }

  /***********************************************************************
   * DP Method
   ***********************************************************************/
  bool DP(int A[], int n) {
    assert(n > 0);

    vector<bool> canjump(n, false);
    canjump[0] = true;

    for (int i = 1; i < n; i++) {
      for (int j = 0; j < i; j++) {
        if (canjump[j] && A[j] >= i - j) {
          canjump[i] = true;
          break;
        }
      }
    }

    return canjump[n - 1];
  }

  /***********************************************************************
   * Greedy Method
   ***********************************************************************/
  bool greedy(int A[], int n) {
    assert(n > 0);

    int maxdis = 0, cur_maxdis = 0;
    for (int i = 0; i < n; i++) {
      if (i == maxdis + 1) {
        maxdis = cur_maxdis;
      }

      cur_maxdis = max(cur_maxdis, i + A[i]);
    }

    if (maxdis >= n - 1) {
      return true;
    } else {
      return false;
    }
  }
};
