#include <stdlib.h>
#include <vector>
#include <assert.h>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
  int evalRPN(vector<string> &tokens) {
    int size = tokens.size();
    if (size == 0) {
      return 0;
    }

    stack<int> stk;
    string ops = "+-*/";
    for (int i = 0; i < size; i++) {
      string str = tokens[i];
      int idx = ops.find(str);

      if (idx != -1) {
        assert(stk.size() >= 2);

        int a = stk.top();
        stk.pop();
        int b = stk.top();
        stk.pop();
        if (idx == 0) { stk.push(b + a); }
        if (idx == 1) { stk.push(b - a); }
        if (idx == 2) { stk.push(b * a); }
        if (idx == 3) { stk.push(b / a); }

      } else {
        stk.push(atoi(str.c_str()));
      }
    }

    assert(stk.size() == 1);
    return stk.top();
  }
};
