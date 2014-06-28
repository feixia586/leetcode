#include <vector>
#include <string>

using namespace std;

class Solution {
public:
  vector<string> restoreIpAddresses(string s) {
    vector<string> res;
    vector<string> parts;

    restoreHelper(res, parts, 0, s);

    return res;
  }

  void restoreHelper(vector<string> &res, vector<string> &parts, int pos, string s) {
    int size = parts.size();
    if (size == 4) {
      if (pos != (int)s.length()) {
        return;
      }

      string str = parts[0];
      for (int i = 1; i < size; i++) {
        str += ("." + parts[i]);
      }
      res.push_back(str);
    }

    for (size_t i = pos; i < s.length() && i < (size_t)pos + 3; i++) {
      string tmp = s.substr(pos, i - pos + 1);
      if (isValid(tmp)) {
        parts.push_back(tmp);
        restoreHelper(res, parts, i + 1, s);
        parts.pop_back();
      }
    }
  }

  bool isValid(string str) {
    if (str[0] == '0')
      return str == "0";

    int val = stoi(str);
    if (val >= 0 && val <= 255) {
      return true;
    }

    return false;
  }

};
