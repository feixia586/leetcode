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

      // find the unsorted part, the minimum value must be there
      if (num[mid] > num[high]) {
        low = mid;
      } else if (num[mid] < num[high]){
        high = mid;
      } else {
        high--;
      }
    }

    return num[low] < num[high] ? num[low] : num[high];
  }
};
