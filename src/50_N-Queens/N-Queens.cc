#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
  vector<vector<string> > solveNQueens(int n) {
    return method1(n);
  }

  /***************************************************************************
   * Method 1 -- recommended
   ***************************************************************************/
  vector<vector<string> > method1(int n) {
    vector<vector<string> > res;
    vector<int> cols;

    if (n <= 0) {
      return res;
    }

    NQueensHelper(res, cols, n);
    return res;
  }
  void NQueensHelper(vector<vector<string> > &res, vector<int> &rows, int n) {
    int size = rows.size();
    if (size == n) {
      res.push_back(drawChessboard(rows));
      return;
    }

    for (int j = 0; j < n; j++) {
      if (!isValid(j, rows)) {
        continue;
      }
      rows.push_back(j);
      NQueensHelper(res, rows, n);
      rows.pop_back();
    }
  }

  // rows[i] --> the column position of row i
  vector<string> drawChessboard(vector<int> &rows) {
    int n = rows.size();
    vector<string> chessboard;
    for (int i = 0; i < n; i++) {
      string str = "";
      for (int j = 0; j < n; j++) {
        if (j == rows[i]) {
          str.push_back('Q');
        } else {
          str.push_back('.');
        }
      }
      chessboard.push_back(str);
    }

    return chessboard;
  }

  bool isValid(int col, vector<int> &rows) {
    int rowNum = rows.size();

    for (int i = 0; i < rowNum; i++) {
      if (rows[i] == col) {
        return false;
      }

      if (i - rows[i] == rowNum - col) {
        return false;
      }

      if (i + rows[i] == rowNum + col) {
        return false;
      }
    }

    return true;
  }
  /***************************************************************************
   * Method 2
   ***************************************************************************/
  vector<vector<string> > method2(int n) {
    map<int, bool> col, l2rDiag, r2lDiag;
    vector<int> queen(n, -1);
    vector<vector<string> > res;
    putQueen(0, n, queen, col, l2rDiag, r2lDiag, res);

    return res;

  }
  void putQueen(int k, int n, vector<int> queen, map<int, bool> col, map<int, bool> l2rDiag, map<int, bool> r2lDiag, vector<vector<string> > &res) {
    if (k == n) {
      vector<string> vec;
      for (int i = 0; i < n; i++) {
        string str(n, '.');
        for (int j = 0; j < n; j++) {
          if (queen[i] == j) str[j] = 'Q';
        }
        vec.push_back(str);
      }
      res.push_back(vec);
      return;
    }

    for (int j = 0; j < n; j++) {
      if (col[j] || l2rDiag[k-j] || r2lDiag[k+j]) continue;
      queen[k] = j;
      col[j] = true; l2rDiag[k-j] = true; r2lDiag[k+j] = true;
      putQueen(k+1, n, queen, col, l2rDiag, r2lDiag, res);
      queen[k] = -1;
      col[j] = false; l2rDiag[k-j] = false; r2lDiag[k+j] = false;
    }
  }
};
