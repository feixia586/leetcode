#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
  int maximalRectangle(vector<vector<char> > &matrix) {
    return spaceN(matrix);
  }

  // space O(n) DP
  int spaceN(vector<vector<char> > &matrix) {
    if (matrix.size() == 0 || matrix[0].size() == 0) {
      return 0;
    }

    int rowNum = matrix.size(), colNum = matrix[0].size();

    vector<int> height(colNum, 0);
    int maxRect = 0;
    for (int i = 0; i < rowNum; i++) {
      for (int j = 0; j < colNum; j++) {
        if (matrix[i][j] == '1') {
          height[j]++;
        } else {
          height[j] = 0; // Note: Need to reset to 0 here!!!
        }
      }

      maxRect = max(maxRect, maxHist(height));
    }

    return maxRect;
  }

  // Space O(n^2) DP
  int spaceNSquare(vector<vector<char> > &matrix) {
    if (matrix.size() == 0 || matrix[0].size() == 0) {
      return 0;
    }

    int rowNum = matrix.size(), colNum = matrix[0].size();

    vector<vector<int> > height(rowNum, vector<int>(colNum, 0));
    for (int j = 0; j < colNum; j++) {
      if (matrix[0][j] == '1') { height[0][j] = 1; }
    }
    for (int i = 1; i < rowNum; i++) {
      for (int j = 0; j < colNum; j++) {
        if (matrix[i][j] == '1') {
          height[i][j] = height[i - 1][j] + 1;
        }
      }
    }

    int maxRect = 0;
    for (int i = 0; i < rowNum; i++) {
      maxRect = max(maxRect, maxHist(height[i]));
    }

    return maxRect;
  }

  int maxHist(const vector<int> &hist) {
    if (hist.size() == 0) {
      return 0;
    }

    int size = hist.size();
    stack<int> stk;
    int maxHist = 0;
    for (int i = 0; i <= size; i++) {
      int crntHeight = (i == size) ? -1 : hist[i];
      while (!stk.empty() && crntHeight <= hist[stk.top()]) {
        int idx = stk.top();
        int h = hist[idx];
        stk.pop();

        int w = stk.empty() ? i : i - stk.top() - 1;
        maxHist = max(maxHist, h * w);
      }
      stk.push(i);
    }

    return maxHist;
  }


};
