#include <vector>
#include <assert.h>

using namespace std;

class Solution {
public:
  int findMin(vector<int> &num) {
    int size = num.size();
    assert(size > 0);
    if (size == 1) {
      return num[0];
    }

    int low = 0, high = size - 1;
    while (low + 1 < high) {
      int mid = low + (high - low) / 2;

      if ((mid == 0 && num[mid] < num[high]) || (mid > 0 && num[mid] < num[mid - 1])) {
        return num[mid];
      }

      // find the unsorted part, the minimum value must be there
      if (num[mid] > num[high]) {
        low = mid;
      } else {
        high = mid;
      }
    }

    return num[low] < num[high] ? num[low] : num[high];
  }
};
