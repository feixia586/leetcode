#include <string>
#include <stack>

using namespace std;

class Solution {
public:
  int longestValidParentheses(string s) {
    stack<int> st;
    int res = 0, p = -1;

    int len = s.length();
    for (int i = 0; i < len; i++) {
      if (s[i] == '(')
        st.push(i);
      else {
        if (st.empty())
          p = i;
        else {
          st.pop();
          if (st.empty())
            res = res > i - p ? res : i - p;
          else
            res = res > i - st.top() ? res : i - st.top();
        }
      }
    }

    return res;
  }
};
