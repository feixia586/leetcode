#include <vector>
#include <queue>
#include <assert.h>

using namespace std;

class Solution {
public:
  void solve(vector<vector<char> > &board) {
    if (board.size() == 0 || board[0].size() == 0) {
      return;
    }

    assert(board.size() > 0);
    assert(board[0].size() > 0);

    int rowNum = board.size();
    int colNum = board[0].size();
    vector<vector<bool> > visited(rowNum, vector<bool>(colNum, false));
    queue<pair<int, int> > que;

    // init the queue using the edge of the board
    for (int i = 0; i < rowNum; i++) {
      if (board[i][0] == 'O') { que.push(make_pair(i, 0)); visited[i][0] = true; }
    }
    for (int j = 1; j < colNum; j++) {
      if (board[rowNum - 1][j] == 'O') { que.push(make_pair(rowNum - 1, j)); visited[rowNum - 1][j] = true; }
    }
    for (int i = rowNum - 2; i >= 0; i--) {
      if (board[i][colNum - 1] == 'O') { que.push(make_pair(i, colNum - 1)); visited[i][colNum - 1] = true; }
    }
    for (int j = colNum - 2; j > 0; j--) {
      if (board[0][j] == 'O') { que.push(make_pair(0, j)); visited[0][j] = true; }
    }

    // BFS
    while (!que.empty()) {
      pair<int, int> pos = que.front();
      que.pop();

      int i = pos.first, j = pos.second;
      if (j - 1 >= 0 && board[i][j - 1] == 'O' && !visited[i][j - 1]) { visited[i][j - 1] = true; que.push(make_pair(i, j-1)); }
      if (i + 1 <= rowNum - 1 && board[i + 1][j] == 'O' && !visited[i + 1][j]) { visited[i+1][j] = true; que.push(make_pair(i+1, j)); }
      if (j + 1 <= colNum - 1 && board[i][j + 1] == 'O' && !visited[i][j + 1]) { visited[i][j + 1] = true; que.push(make_pair(i, j+1)); }
      if (i - 1 >= 0 && board[i - 1][j] == 'O' && !visited[i - 1][j]) { visited[i - 1][j] = true; que.push(make_pair(i - 1, j)); }
    }

    for (int i = 0; i < rowNum; i++) {
      for (int j = 0; j < colNum; j++) {
        if (board[i][j] == 'O' && visited[i][j] == false) {
          board[i][j] = 'X';
        }
      }
    }
  }
};
