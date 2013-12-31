#include <algorithm>

using namespace std;

class Solution {
public:
  bool canJump(int A[], int n) {
    int minstep = 0, ms_maxdis= 0, cur_maxdis = 0;
    for (int i = 0; i < n; i++) {
      if (i == ms_maxdis + 1) {
        ms_maxdis = cur_maxdis;
        minstep++;
      }

      cur_maxdis = max(cur_maxdis, A[i]+i);
    }

    if (ms_maxdis >= n-1) return true;
    else return false;
  }
};
