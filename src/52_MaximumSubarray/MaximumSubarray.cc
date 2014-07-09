#include <algorithm>
#include <assert.h>

using namespace std;

class Solution {
public:
  int maxSubArray(int A[], int n) {
    return DivideConquer(A, 0, n-1);
  }

  /************************************************************
   * DivideConquer Method
   ************************************************************/
  int onePassMethod(int A[], int n) {
    assert(n > 0);
    int max_sum  = A[0];
    int tmp_sum = 0;
    for (int i = 0; i < n; i++) {
      if (tmp_sum < 0) {
        tmp_sum = A[i];
      } else {
        tmp_sum += A[i];
      }

      max_sum = max(tmp_sum, max_sum);
    }

    return max_sum;
  }

  /************************************************************
   * DivideConquer Method
   ************************************************************/
  int DivideConquer(int A[], int low, int high) {
    if (low == high)
      return A[low];

    int mid = (low + high) / 2;
    int left = DivideConquer(A, low, mid);
    int right = DivideConquer(A, mid+1, high);

    int maxsurfix = A[mid], maxprefix = A[mid+1];
    int tmp = 0;
    for (int i = mid; i >= low; i--) {
      tmp += A[i];
      maxsurfix = max(tmp, maxsurfix);
    }

    tmp = 0;
    for (int i = mid+1; i <= high; i++) {
      tmp += A[i];
      maxprefix = max(tmp, maxprefix);
    }

    return max(max(left, right), maxsurfix+maxprefix);
  }
};
