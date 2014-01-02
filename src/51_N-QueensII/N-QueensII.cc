#include <vector>
#include <string>
#include <map>
#include <memory.h>

using namespace std;
class Solution {
public:
  // change the data structure(use dynamic array instead of vector and map) to be more efficient; the algorithm is the same
  // as N-Queens
  int totalNQueens(int n) {
    int *col = new int[n], *l2rDiag = new int[2*n-1], *r2lDiag = new int[2*n-1];
    memset(col, 0, sizeof(int)*n);
    memset(l2rDiag, 0, sizeof(int)*(2*n-1));
    memset(r2lDiag, 0, sizeof(int)*(2*n-1));
    int *queen = new int[n];
    memset(queen, -1, sizeof(int)*n);

    int res = 0;
    putQueen(0, n, queen, col, l2rDiag, r2lDiag, res);

    delete []col; delete []l2rDiag; delete []r2lDiag; delete []queen;
    return res;
  }

  void putQueen(int k, int n, int *queen, int *col, int *l2rDiag, int *r2lDiag, int &res) {
    if (k == n) {
      res++;
      return;
    }

    for (int j = 0; j < n; j++) {
      if (col[j] || l2rDiag[k-j+n-1] || r2lDiag[k+j]) continue;
      queen[k] = j;
      col[j] = 1; l2rDiag[k-j+n-1] = 1; r2lDiag[k+j] = 1;
      putQueen(k+1, n, queen, col, l2rDiag, r2lDiag, res);
      queen[k] = -1;
      col[j] = 0; l2rDiag[k-j+n-1] = 0; r2lDiag[k+j] = 0;
    }
  }

};
