#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
  static const string d_str[10];
  vector<string> letterCombinations(string digits) {
    vector<string> res;
    DFS_recursive(digits, 0, "", res);
    return res;
  }

  /***********************************************************
   * DFS recursive
   ***********************************************************/
  void DFS_recursive(string& digits, size_t pos, string crnt, vector<string>& res) {
    if(pos == digits.length()) {
      res.push_back(crnt);
      return;
    }

    int idx = digits[pos] - '0';
    for (size_t i = 0; i < d_str[idx].length(); i++) {
      DFS_recursive(digits, pos+1, crnt+d_str[idx][i], res);
    }
  }
};

// ATTENTION: When moving this piece of code to leetcode, uncomment the line below
//const string Solution::d_str[10] = {" ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
