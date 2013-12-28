#include <vector>

using namespace std;

class Solution {
public:
  void solveSudoku(vector<vector<char> > &board) {

  }

  bool backtrack(vector<vector<char> > &board, int row, int col) {
    bool get_success = getNextPos(board, row, col);
  }
  bool getNextPos(const vector<vector<char> > &board, int &row, int &col) {
    while (board[row][col] != '.') {

    }
  }
};
