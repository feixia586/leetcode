#include <vector>

using namespace std;

class Solution {
public:
  int maxArea(vector<int> &height) {
    // brute_force(height);
    return shrink_method(height);
  }

  /******************************************************
   * Brute force Methods. Time O(n^2)
   ******************************************************/
  int brute_force(vector<int>& height) {
    int len = height.size();
    int res = 0;
    for (int i = 0; i < len-1; i++) {
      for (int j = i+1; j < len; j++) {
        int h = height[i] > height[j] ? height[j] : height[i];
        int area = (j - i) * h;
        res = area > res ? area : res;
      }
    }

    return res;
  }

  /******************************************************
  * Shrink Methods. Time O(n)
  ******************************************************/
  int shrink_method(vector<int>& height) {
    int len = height.size();
    int low = 0, high = len - 1;
    int res = 0;
    while(low < high) {
      int h = height[low] > height[high] ? height[high] : height[low];
      int area = (high - low) * h;
      res = max(area, res);

      if (height[low] < height[high])
        low++;
      else
        high--;
    }

    return res;
  }

};
