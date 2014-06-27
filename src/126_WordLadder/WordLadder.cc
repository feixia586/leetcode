#include <unordered_set>
#include <string>
#include <queue>

using namespace std;

class Solution {
public:
  int ladderLength(string start, string end, unordered_set<string> &dict) {
    if (dict.size() == 0) {
      return 0;
    }

    queue<string> que;
    que.push(start);

    int ladderLen = 0;
    while(!que.empty()) {
      ladderLen++;
      int size = que.size();
      for (int i = 0; i < size; i++) {
        string str = que.front();
        que.pop();

        int len = str.length();
        for (int j = 0; j < len; j++) {
          for (char c = 'a'; c <= 'z'; c++) {
            if (c == str[j]) {
              continue;
            }

            string tmp = replace(str, j, c);
            if (tmp == end) {
              return ladderLen + 1;
            }
            if (dict.find(tmp) != dict.end()) {
              que.push(tmp);
              // the line below makes sure the visited one cannot be visited again
              dict.erase(tmp); // timeout without this line
            }
          }
        }
      }
    }

    return 0;
  }

  string replace(string str, int i, char c) {
    string res = str;
    res[i] = c;
    return res;
  }
};
