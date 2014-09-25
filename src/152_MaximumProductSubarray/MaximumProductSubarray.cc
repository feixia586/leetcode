#include <assert.h>
#include <algorithm>

using namespace std;

class Solution {
public:
  int maxProduct(int A[], int n) {
    assert(n >= 1);

    int maxProd = A[0];
    int maxHere = A[0], minHere = A[0];

    for (int i = 1; i < n; i++) {
      int tmpMax = max(max(maxHere * A[i], minHere * A[i]), A[i]);
      int tmpMin = min(min(maxHere * A[i], minHere * A[i]), A[i]);

      maxHere = tmpMax;
      minHere = tmpMin;

      maxProd = max(maxProd, maxHere);
    }

    return maxProd;
  }
};
