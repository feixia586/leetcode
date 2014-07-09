#include <assert.h>
#include <algorithm>

using namespace std;

class Solution {
public:
  void sortColors(int A[], int n) {
    method_1(A, n);
    //method_2(A, n);
  }

  /*******************************************************************
   * method 1 -- O(n), only one passes
   *******************************************************************/
  void method_1(int A[], int n) {
    if (n <= 1) {
      return;
    }

    int pl = 0, pr = n - 1;
    int i = 0;
    while (i <= pr) {
      if (A[i] == 0) {
        swap(A[pl], A[i]);
        pl++;
        i++;
      } else if (A[i] == 1) {
        i++;
      } else {
        swap(A[i], A[pr]);
        pr--;
      }
    }
  }

  /*******************************************************************
   * method 2 -- O(n), but two passes
   *******************************************************************/
  void method_2(int A[], int n) {
    if (n <= 1) {
      return;
    }

    int x = partition(A, 0, n-1, 1);
    if (x < n - 1) {
      partition(A, x, n-1, 2);
    }
  }

  int partition(int A[], int low, int high, int val) {
    assert(low < high);
    int p = low - 1;
    for (int q = low; q <= high; q++) {
      if (A[q] < val) {
        p++;
        swap(A[p], A[q]);
      }
    }

    return p + 1;
  }
};
