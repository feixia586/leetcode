#include <string>
#include <stack>

using namespace std;

class Solution {
public:
  bool isValid(string s) {
    if (s.length() == 0) {
      return true;
    }

    int len = s.length();
    stack<char> stk;
    for (int i = 0; i < len; i++) {
      if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
        stk.push(s[i]);
      } else {
        if (stk.empty()) {
          return false;
        }

        char ch = stk.top();
        if (ch == '(' && s[i] != ')') { return false; }
        if (ch == '[' && s[i] != ']') { return false; }
        if (ch == '{' && s[i] != '}') { return false; }

        stk.pop();
      }
    }

    if (stk.empty()) {
      return true;
    } else {
      return false;
    }
  }
};
