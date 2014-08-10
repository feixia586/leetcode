#include <string>
#include <stack>

using namespace std;

class Solution {
public:
  int longestValidParentheses(string s) {
    int len = s.length();

    stack<int> stk;
    int res = 0, pos = -1;
    for (int i = 0; i < len; i++) {
      if (s[i] == '(') {
        stk.push(i);
      } else {
        if (stk.empty()) {
          pos = i;
        } else {
          stk.pop();
          if (stk.empty()) {
            res = max(res, i - pos);
          } else {
            res = max(res, i - stk.top());
          }
        }
      }
    }

    return res;
  }
};
