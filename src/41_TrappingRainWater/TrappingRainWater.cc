class Solution {
public:
  int trap(int A[], int n) {
    int low = 0, high = n - 1;
    int res = 0;
    int p = 0;
    while (low < high) {
      if (A[low] < A[high]) {
        p = low + 1;
        while(A[low] > A[p]) { res += A[low] - A[p]; p++; }
        low = p;
      } else {
        p = high - 1;
        while(A[high] > A[p]) { res += A[high] - A[p]; p--; }
        high = p;
      }
    }

    return res;
  }
};
