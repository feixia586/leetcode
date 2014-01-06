#include <vector>

using namespace std;

class Solution {
public:
  int minPathSum(vector<vector<int> > &grid) {
    int m = grid.size();
    int n = grid[0].size();
    // or we can use: vector<vector<int> > mat(m+1, vector<int>(n+1));
    int** mat = new int* [m+1];
    for (int i = 0; i < m+1; i++) mat[i] = new int[n+1];
    mat[0][1] = 0; mat[1][0] = 0;
    for (int i = 1; i < m+1; i++) {
      for (int j = 1; j < n+1; j++) {
        if (i == 1) mat[i][j] = mat[i][j-1] + grid[i-1][j-1];
        else if (j == 1) mat[i][j] = mat[i-1][j] + grid[i-1][j-1];
        else mat[i][j] = min(grid[i-1][j-1]+mat[i-1][j], grid[i-1][j-1]+mat[i][j-1]);
      }
    }

    int res = mat[m][n];
    for (int i = 0; i < m+1; i++) delete []mat[i];
    delete []mat;
    return res;
  }
};
