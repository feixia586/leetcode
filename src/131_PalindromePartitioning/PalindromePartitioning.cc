#include <vector>
#include <string>

using namespace std;

class Solution {
public:
  vector<vector<string> > partition(string s) {
    vector<vector<string> > res;
    vector<string> parts;

    if (s.length() == 0) {
      return res;
    }

    partitionHelper(res, parts, 0, s);
    return res;
  }

  void partitionHelper(vector<vector<string> > &res, vector<string> &parts, int pos, string s) {
    int len = s.length();
    if (pos >= len) {
      res.push_back(parts);
      return;
    }

    for (int i = pos; i < len; i++) {
      string prefix = s.substr(pos, i - pos + 1);
      if (isPalindrome(prefix)) {
        parts.push_back(prefix);
        partitionHelper(res, parts, i + 1, s);
        parts.pop_back();
      }
    }
  }

  bool isPalindrome(string str) {
    if (str.length() == 0) {
      return true;
    }

    int low = 0, high = str.length() - 1;
    while (low <= high) {
      if (str[low++] != str[high--]) {
        return false;
      }
    }

    return true;
  }
};
