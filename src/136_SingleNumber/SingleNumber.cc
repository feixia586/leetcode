#include <assert.h>

class Solution {
public:
  int singleNumber(int A[], int n) {
    assert(n > 0);

    int res = 0;
    for (int i = 0; i < n; i++) {
      res = res ^ A[i];
    }
    return res;
  }
};
