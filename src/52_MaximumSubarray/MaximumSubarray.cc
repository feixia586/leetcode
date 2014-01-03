#include <algorithm>

using namespace std;

class Solution {
public:
  int maxSubArray(int A[], int n) {
    return DivideConquer(A, 0, n-1);
  }

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
