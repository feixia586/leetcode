#include <vector>
#include <map>

using namespace std;

class Solution {
public:
  void solveSudoku(vector<vector<char> > &board) {
    backtrack(board, 0, 0);
  }

  bool backtrack(vector<vector<char> > &board, int row, int col) {
    bool get_success = getNextPos(board, row, col);
    if (!get_success) return true;

    vector<char> p_value = getPossibleValue(board, row, col);
    for (size_t i = 0; i < p_value.size(); i++) {
      board[row][col] = p_value[i];
      if(backtrack(board, row, col)) return true;
      board[row][col] = '.';
    }

    return false;
  }
  bool getNextPos(const vector<vector<char> > &board, int &row, int &col) {
    while (row < 9) {
      if (board[row][col] == '.') return true;
      row = (col == 8) ? row + 1 : row;
      col = (col == 8) ? 0 : col+1;
    }

    return false;
  }

  vector<char> getPossibleValue(const vector<vector<char> > &board, const int row, const int col) {
    vector<char> possible_value;
    map<char, bool> found;
    for (int i = 0 ; i < 9; i++) {
      if (board[row][i] != '.') found[board[row][i]] = true;
      if (board[i][col] != '.') found[board[i][col]] = true;
      char ch = board[row/3*3+i/3][col/3*3+i%3];
      if (ch) found[ch] = true;
    }

    for (char ch = '1'; ch <= '9'; ch++) {
      if (!found[ch]) possible_value.push_back(ch);
    }
    return possible_value;
  }
};
