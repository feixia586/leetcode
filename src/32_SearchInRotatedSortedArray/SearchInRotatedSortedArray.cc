class Solution {
public:
  int search(int A[], int n, int target) {
    int low = 0, high = n - 1;
    int mid;

    // Note "<="
    while (low <= high) {
      mid = (low + high) / 2;
      if (A[mid] == target)
        return mid;

      // Note ">="
      if (A[mid] >= A[low]) { // the left half is sorted
        if (target < A[mid] && target >= A[low])
          high = mid - 1;
        else
          low = mid + 1;
      } else { // the right half is sorted
        if (target > A[mid] && target <= A[high])
          low = mid + 1;
        else
          high = mid - 1;
      }
    }

    return -1;
  }
};
