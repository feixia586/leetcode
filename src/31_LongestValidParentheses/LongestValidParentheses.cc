#include <string>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
  int longestValidParentheses(string s) {
    return stack_Method(s);
    // return DP_Method(s);
  }

  /******************************************************************
   * Stack Method
   ******************************************************************/
  int stack_Method(string s) {
    int len = s.length();
    if (len <= 1) {
      return 0;
    }

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

  /******************************************************************
   * DP Method
   ******************************************************************/
  int DP_Method(string s) {
    // state: f[i]: length of the longest valid parentheses that ends with ith character
    // function: f[i] = f[i-1] + 2 + f[j-1] (where j = i - f[i-1] - 1) if i-th of s == ')' and j-th of s == ')';
    //                = 0, otherwise, including j < 1
    // init: f[0] = 0
    // answer: max(f[i])

    int len = s.length();
    if (len <= 1) {
      return 0;
    }

    vector<int> f(len + 1, 0);
    for (int i = 1; i <= len; i++) {
      int j = i - f[i - 1] - 1;
      if (j < 1) { continue; }

      if (s[i-1] == ')' && s[j-1] == '(') {
        f[i] = f[i -1] + 2 + f[j - 1];
      }

    }

    int res = 0;
    for (int i = 1; i <= len; i++) {
      res = max(res, f[i]);
    }

    return res;
  }
};
