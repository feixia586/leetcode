#include <vector>
#include <map>

using namespace std;

class Solution {
public:
  bool isValidSudoku(vector<vector<char> > &board) {
    map<char, bool> row;
    map<char, bool> col;
    map<char, bool> subox;

    for (int i = 0; i < 9; i++) {
      row.clear();
      col.clear();
      for (int j = 0; j < 9; j++) {
        if (board[i][j] != '.') {
          if (row[board[i][j]]) return false;
          else row[board[i][j]] = true;
        }

        if (board[j][i] != '.') {
          if (col[board[j][i]]) return false;
          else col[board[j][i]] = true;
        }
      }
    }

    for (int i = 0; i < 9; i+=3) {
      for (int j = 0; j < 9; j+= 3) {
        subox.clear();
        for (int k = 0; k < 9; k++) {
          int row_idx = i + k / 3;
          int col_idx = j + k % 3;
          if (board[row_idx][col_idx] == '.')
            continue;
          if (subox[board[row_idx][col_idx]]) return false;
          else subox[board[row_idx][col_idx]] = true;
        }
      }
    }

    return true;
  }
};
