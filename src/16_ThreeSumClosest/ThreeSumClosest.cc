#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

class Solution {
public:
  int threeSumClosest(vector<int> &num, int target) {
    sort(num.begin(), num.end());

    int res = num[0] + num[1] + num[num.size()-1];
    int len = num.size();
    for (int low = 0; low < len-2; low++) {
      int high = len - 1;
      int p = low + 1;
      while(p < high) {
        int sum = num[low] + num[p] + num[high];
        if(abs(sum - target) <= abs(res - target))
          res = sum;
        if(sum > target)
          high--;
        else if (sum < target)
          p++;
        else
          return res;
      }
    }

    return res;
  }
};
