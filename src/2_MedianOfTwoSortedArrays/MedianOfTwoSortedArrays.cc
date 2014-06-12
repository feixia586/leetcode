#include <iostream>
#include <assert.h>
#include <climits>

using namespace std;

class Solution {
public:
  double findMedianSortedArrays(int A[], int m, int B[], int n) {
    //return naive_method(A, m, B, n);
    return binaryMethod(A, m, B, n);
  }

  /****************************************************************************
   * O(k) method. Here k = (m + n) / 2
   ****************************************************************************/

  /****************************************************************************
   * O(lg(m + n)) method.
   ****************************************************************************/
  double binaryMethod(int A[], int m, int B[], int n) {
    assert(A != NULL && B != NULL);
    int len = m + n;
    if (len % 2 == 0) {
      return (findKth(A, 0, m-1, B, 0, n-1, len / 2) + findKth(A, 0, m-1, B, 0, n-1, len / 2 + 1)) / 2.0;
    } else {
      return findKth(A, 0, m-1, B, 0, n-1, len / 2 + 1);
    }
  }

  int findKth(int A[], int A_low, int A_high, int B[], int B_low, int B_high, int k) {
    if (A_low > A_high) {
      return B[B_low + k - 1];
    }
    if (B_low > B_high) {
      return A[A_low + k - 1];
    }
    if (k == 1) {
      return A[A_low] < B[B_low] ? A[A_low] : B[B_low];
    }

    int A_key = A_low + k / 2 - 1 <= A_high ? A[A_low + k / 2 - 1] : INT_MAX;
    int B_key = B_low + k / 2 - 1 <= B_high ? B[B_low + k / 2 - 1] : INT_MAX;

    if (A_key > B_key) {
      return findKth(A, A_low, A_high, B, B_low + k / 2, B_high, k - k / 2);
    } else {
      return findKth(A, A_low + k / 2, A_high, B, B_low, B_high, k - k / 2);
    }
  }
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
