#include <string>
#include <stack>

using namespace std;

class Solution {
public:
  bool isValid(string s) {
    int len = s.length();
    if (len == 0)
      return true;

    stack<char> stk;
    for (int i = 0; i < len; i++) {
      switch (s[i]) {
      case '(':
      case '{':
      case '[': stk.push(s[i]); break;
      case ')':
        if (stk.empty()) return false;
        else if (stk.top() == '(') { stk.pop(); break; }
        else return false;
      case '}':
        if (stk.empty()) return false;
        else if (stk.top() == '{') { stk.pop(); break; }
        else return false;
      case ']':
        if (stk.empty()) return false;
        else if (stk.top() == '[') { stk.pop(); break; }
        else return false;
      default:
        return false;
      }
    }

    if(stk.empty())
      return true;
    else
      return false;
  }
};
