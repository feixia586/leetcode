class Solution {
public:
  int search(int A[], int n, int target) {
    int low = 0, high = n - 1;
    while (low + 1 < high) {
      int mid = low + (high - low) / 2;
      if (target == A[mid]) {
        return mid;
      }
            
      if (A[mid] >= A[low]) {
        if (target >= A[low] && target < A[mid]) {
          high = mid;
        } else {
          low = mid;
        }
      } else {
        if (target <= A[high] && target > A[mid]) {
          low = mid;
        } else {
          high = mid;
        }
      }
    }
        
    if (target == A[low]) return low;
    if (target == A[high]) return high;
        
    return -1;
  }
};
