#include <memory.h>
#include <vector>

using namespace std;


class Solution {
public:
  int uniquePaths(int m, int n) {
    // int res = 0;
    // dfs(m, n, 0, 0, res);
    // return res;

    // return recr(m, n);

    return DP(m, n);
  }

  /**********************************************************************
   * Naive DFS method. Time out
   **********************************************************************/
  void dfs(int m, int n, int curM, int curN, int &res) {
    if (curM == m-1 && curN == n-1) { res++; return; }
    if (curM < m-1) dfs(m, n, curM+1, curN, res);
    if (curN < n-1) dfs(m, n, curM, curN+1, res);
  }

  /*********************************************************************
   * Recursion with memorization. Without memorization, it will time out.
   *********************************************************************/
  int recr(int m, int n) {
    const int maxM = 100, maxN = 100;
    int mat[maxM+1][maxN+1]; // Note the dimension !!!
    memset(mat, -1, sizeof(int)*(maxM+1)*(maxN+1));

    return recr_mem(m, n, 0, 0, mat);
  }
  int recr_mem(int m, int n, int curM, int curN, int mat[][101]) {
    if (curM == m-1 && curN == n-1) return 1;
    if (curM > m-1 || curN > n-1) return 0;

    if (mat[curM+1][curN] == -1)
      mat[curM+1][curN] = recr_mem(m, n, curM+1, curN, mat);
    if (mat[curM][curN+1] == -1)
      mat[curM][curN+1] = recr_mem(m, n, curM, curN+1, mat);

    return mat[curM+1][curN] + mat[curM][curN+1];
  }

  /**********************************************************************
   * Bottom-up dynamic programming
   **********************************************************************/
  int DP(int m, int n) {
    /*
      const int maxM = 100, maxN = 100;
      int mat[maxM+1][maxN+1] = {{0}};
      mat[0][1] = 1;
      // note the index here -> picture a (m+1)*(n+1) matrix in mind
      for (int i = 1; i < m+1; i++) {
      for (int j = 1; j < n+1; j++) {
      mat[i][j] = mat[i-1][j] + mat[i][j-1];
      }
      }
      return mat[m][n]; */



    // more decent method
    vector<vector<int> > num(m, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
      num[0][i] = 1;
    }
    for (int i = 0; i < m; i++) {
      num[i][0] = 1;
    }

    for (int i = 1; i < m; i++) {
      for (int j = 1; j < n; j++) {
        num[i][j] = num[i][j-1] + num[i-1][j];
      }
    }

    return num[m-1][n-1];
  }

};
