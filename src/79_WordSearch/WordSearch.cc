#include <vector>
#include <string>

using namespace std;

class Solution {
public:
  bool exist(vector<vector<char> > &board, string word) {
    if (board.size() == 0 || board[0].size() == 0) {
      return false;
    }
    if (word.length() == 0) {
      return true;
    }

    int rowNum = board.size();
    int colNum = board[0].size();
    for (int i = 0; i < rowNum; i++) {
      for (int j = 0; j < colNum; j++) {
        if (board[i][j] == word[0]) {
          bool resHere = existHelper(board, i, j, 0, word);

          if (resHere) {
            return true;
          }
        }
      }
    }

    return false;
  }

  bool existHelper(vector<vector<char> > &board, int i, int j, int pos, string word) {
    if (pos == (int)word.length()) {
      return true;
    }

    int rowNum = board.size();
    int colNum = board[0].size();
    if (i < 0 || i >= rowNum || j < 0 || j >= colNum) {
      return false;
    }
    if (board[i][j] != word[pos]) {
      return false;
    }

    board[i][j] = '#';
    bool next = existHelper(board, i-1, j, pos+1, word)
      || existHelper(board, i+1, j, pos+1, word)
      || existHelper(board, i, j-1, pos+1, word)
      || existHelper(board, i, j+1, pos+1, word);
    board[i][j] = word[pos];

    return next;

  }
};
