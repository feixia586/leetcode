#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

class Solution {
public:
// A clever algorithm, found in wikipedia http://en.wikipedia.org/wiki/Permutation#Generation_in_lexicographic_order
// 1. Find the largest index k such that a[k] < a[k + 1]. If no such index exists, the permutation is the last permutation.
// 2. Find the largest index l such that a[k] < a[l], l has to be greater than k.
// 3. Swap the value of a[k] with that of a[l].
// 4. Reverse the sequence from a[k + 1] up to and including the final element a[n].

  void nextPermutation(vector<int> &num) {
    int size = num.size();
    if (size < 2) return;

    int k;
    for (k = size - 2; k >=0; k--) {
      if (num[k] < num[k+1])
        break;
    }
    if (k < 0) { reverse(num.begin(), num.end()); return; }

    int l = size-1;
    while (num[l] <= num[k]) l--;
    assert(l > k);

    swap(num[k], num[l]);

    reverse(num.begin()+k+1, num.end());

  }
};
