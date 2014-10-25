#include <stdlib.h>
#include <vector>
#include <assert.h>
#include <stack>
#include <string>
#include <climits>

using namespace std;

class Solution {
public:
  int evalRPN(vector<string> &tokens) {
    if (tokens.size() == 0) {
      return 0;
    }

    stack<int> stk;
    int size = tokens.size();
    for (int i = 0; i < size; ++i) {
      string str = tokens[i];

      if (isOp(str)) {
        assert(stk.size() >= 2);

        int valB = stk.top(); stk.pop();
        int valA = stk.top(); stk.pop();
        stk.push(applyOp(valA, valB, str));
      } else {
        stk.push(stoi(str));
      }
    }

    assert(stk.size() == 1);
    return stk.top();
  }

  bool isOp(string str) {
    if (str == "+" || str == "-" || str == "*" || str == "/") {
      return true;
    }

    return false;
  }

  int applyOp(int valA, int valB, string str) {
    if (str == "+") {
      return valA + valB;
    } else if (str == "-") {
      return valA - valB;
    } else if (str == "*") {
      return valA * valB;
    } else if (str == "/") {
      return valA / valB;
    } else {
      return INT_MIN;
    }
  }
};
