#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
  vector<vector<string> > solveNQueens(int n) {
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
