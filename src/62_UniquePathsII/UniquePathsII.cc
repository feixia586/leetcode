#include <vector>

using namespace std;

class Solution {
public:
  int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
    return dp1(obstacleGrid);
  }

  /******************************************************************
   * More decent method -- recommended
   ******************************************************************/
  int dp1(vector<vector<int> > &obstacleGrid) {
    if (obstacleGrid.size() == 0 || obstacleGrid[0].size() == 0) {
      return 0;
    }

    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    vector<vector<int> > num(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++) {
      if (obstacleGrid[i][0] == 0) {
        num[i][0] = 1;
      } else {
        break;
      }
    }

    for (int i = 0; i < n; i++) {
      if (obstacleGrid[0][i] == 0) {
        num[0][i] = 1;
      } else {
        break;
      }
    }

    for (int i = 1; i < m; i++) {
      for (int j = 1; j < n; j++) {
        if (obstacleGrid[i][j] != 0) {
          num[i][j] = 0;
        } else {
          num[i][j] = num[i][j-1] + num[i-1][j];
        }
      }
    }

    return num[m-1][n-1];
  }

  /******************************************************************
   * method 2
   ******************************************************************/
  int dp2(vector<vector<int> > &obstacleGrid) {
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
