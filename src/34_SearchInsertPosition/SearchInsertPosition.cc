class Solution {
public:
  int searchInsert(int A[], int n, int target) {
    int low = 0, high = n-1, mid;

    while (low <= high) {
      mid = (low + high) / 2;
      if (A[mid] == target)
        return mid;

      if (target > A[mid])
        low = mid + 1;
      else
        high = mid - 1;
    }

    if (target > A[mid])
      return mid + 1;
    else
      return mid;

  }
};
