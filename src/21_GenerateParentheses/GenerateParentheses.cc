#include <vector>
#include <string>

using namespace std;

class Solution {
public:
  vector<string> generateParenthesis(int n) {
    vector<string> res;
    genParenthesisHelper(n, 0, 0, "", res);
    return res;
  }

  void genParenthesisHelper(int n, int left, int right, string s, vector<string>& res) {
    if (left == n && right == n) {
      res.push_back(s);
      return;
    }

    if (left < n)
      genParenthesisHelper(n, left+1, right, s+"(", res);
    if (right < left)
      genParenthesisHelper(n, left, right+1, s+")", res);
  }
};
