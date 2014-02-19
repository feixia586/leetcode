class Solution {
public:
  double findMedianSortedArrays(int A[], int m, int B[], int n) {
    return naive_method(A, m, B, n);
  }

  /****************************************************************************
   * O(k) method. Here k = (m + n) / 2
   ****************************************************************************/

  /****************************************************************************
   * O(lgm + lgn) method.
   ****************************************************************************/

  /****************************************************************************
   * Naive Method. Time O(m+n); Space O(m+n)
   * Idea: do merge sorting first, then calculate the median
   ****************************************************************************/
  double naive_method(int A[], int m, int B[], int n) {
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

    if (size % 2 != 0) {
      int tmp = all[mid];
      delete[] all;
      return tmp;
    } else {
      double tmp = (all[mid-1] + all[mid]) / 2.0;
      delete[] all;
      return tmp;
    }

  }
};
