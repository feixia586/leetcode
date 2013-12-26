#include <string>
#include <stack>

using namespace std;

class Solution {
public:
  int longestValidParentheses(string s) {
    stack<char> st;
    int res = 0, tmp = 0;

    int len = s.length();
    for (int i = 0; i < len; i++) {
      if (s[i] == '(')
        st.push('(');
      else {
        if (!st.empty()) {
          if (st.top() == '(') {
            st.pop();
            tmp += 2;
            res = tmp > res ? tmp : res;
          }
        } else {
          tmp = 0;
        }
      }
    }

    return res;
  }
};
