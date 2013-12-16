class Solution {
public:
  double findMedianSortedArrays(int A[], int m, int B[], int n) {
    int size = m + n;
    int mid = size / 2;
    int* all = new int[size];
    int i = 0, j = 0, k = 0;
    while(i < m && j < n) {
      if(A[i] < B[j]) {
        all[k] = A[i];
        i++;
      } else {
        all[k] = B[j];
        j++;
      }

      k++;
    }

    if(i == m) {
      for ( ; j < n; j++, k++)
        all[k] = B[j];
    } else {
      for ( ; i < m; i++, k++)
        all[k] = A[i];
    }

    if (size % 2 != 0)
      return all[mid];
    else
      return (all[mid-1] + all[mid]) / 2.0;

  }
};
