#include <assert.h>
#include <algorithm>

using namespace std;

class Solution {
public:
  void sortColors(int A[], int n) {
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
