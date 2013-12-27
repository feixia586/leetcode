#include <vector>

using namespace std;

class Solution {
public:
  vector<int> searchRange(int A[], int n, int target) {
    vector<int> res(2, -1);
    int lbound = binary_search(A, n, target, true); // lower bound
    int ubound = binary_search(A, n, target, false); // upper bound

    res[0] = lbound;
    res[1] = ubound;

    return res;
  }

  int binary_search(int A[], int n, int target, bool lbound) {
    int low = 0, high = n-1, mid;
    while(low <= high) {
      mid = (low + high) / 2;
      if (A[mid] == target) {
        if (lbound & (mid == 0 || A[mid-1] < A[mid])) return mid;
        if (!lbound & (mid == high || A[mid+1] > A[mid])) return mid;
      }

      if (lbound) {
        if (target > A[mid]) low = mid + 1;
        else high = mid - 1;
      } else {
      if(target >= A[mid]) low = mid + 1;
      else high = mid - 1;
      }
    }

    return -1;
  }
};
