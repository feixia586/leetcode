#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
  int largestRectangleArea(vector<int> &height) {
    int size = height.size();
    if (size == 0) {
      return 0;
    }

    stack<int> stk;
    int res = 0;
    for (int i = 0; i <= size; i++) {
      int crnt = (i == size) ? -1 : height[i];
      while (!stk.empty() && crnt <= height[stk.top()]) {
        int h = height[stk.top()];
        stk.pop();
        int w = stk.empty() ? i : i - stk.top() - 1;

        res = max(res, h * w);
      }

      stk.push(i);
    }

    return res;
  }
};
