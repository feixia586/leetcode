#include <vector>

using namespace std;

class Solution {
public:
  int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();

    int mat[101][101] = {{0}};
    mat[0][1] = 1;
    for (int i = 1; i < m+1; i++) {
      for (int j = 1; j  < n+1; j++) {
        if (obstacleGrid[i-1][j-1] == 1)
          mat[i][j] = 0;
        else
          mat[i][j] = mat[i-1][j] + mat[i][j-1];
      }
    }
    return mat[m][n];
  }
};
