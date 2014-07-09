#include <vector>
#include <assert.h>
#include <climits>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
  int threeSumClosest(vector<int> &num, int target) {
    int size = num.size();
    assert(size >= 3);

    sort(num.begin(), num.end());
    int diff = INT_MAX, res;
    for (int low = 0; low < size - 2; low++) {
      int high = size - 1;
      int p = low + 1;
      while (p < high) {
        int sum = num[low] + num[p] + num[high];
        if (abs(sum - target) < diff) {
          diff = abs(sum - target);
          res = sum;
        }

        if (sum > target) {
          high--;
        } else if (sum < target) {
          p++;
        } else {
          return sum;
        }
      }
    }

    return res;
  }
};
