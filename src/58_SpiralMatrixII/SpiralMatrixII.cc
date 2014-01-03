#include <vector>

using namespace std;

class Solution {
public:
  vector<vector<int> > generateMatrix(int n) {
    vector<vector<int> > res(n, vector<int>(n));

    int beginRow = 0, endRow = n - 1;
    int beginCol = 0, endCol = n - 1;
    int k = 1;
    while(1) {
      for (int i = beginCol; i <= endCol; i++)
        res[beginRow][i] = k++;
      if (++beginRow > endRow) break;

      for (int i = beginRow; i <= endRow; i++)
        res[i][endCol] = k++;
      if (--endCol < beginCol) break;

      for (int i = endCol; i >= beginCol; i--)
        res[endRow][i] = k++;
      if (--endRow < beginRow) break;

      for (int i = endRow; i >= beginRow; i--)
        res[i][beginCol] = k++;
      if (++beginCol > endCol) break;
    }

    return res;
  }
};
