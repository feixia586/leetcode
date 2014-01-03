#include <vector>

using namespace std;

class Solution {
public:
  vector<int> spiralOrder(vector<vector<int> > &matrix) {
    vector<int> res;
    if (matrix.empty()) return res;

    int beginRow = 0, endRow = matrix.size() - 1;
    int beginCol = 0, endCol = matrix[0].size() - 1;
    while(1) {
      for (int i = beginCol; i <= endCol; i++)
        res.push_back(matrix[beginRow][i]);
      if (++beginRow > endRow) break;

      for (int i = beginRow; i <= endRow; i++)
        res.push_back(matrix[i][endCol]);
      if (--endCol < beginCol) break;

      for (int i = endCol; i >= beginCol; i--)
        res.push_back(matrix[endRow][i]);
      if (--endRow < beginRow) break;

      for (int i = endRow; i >= beginRow; i--)
        res.push_back(matrix[i][beginCol]);
      if (++beginCol > endCol) break;
    }

    return res;
  }
};
