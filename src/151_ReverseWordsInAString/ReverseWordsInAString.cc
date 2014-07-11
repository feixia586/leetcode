#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
  void reverseWords(string &s) {
    string res = "";

    int i = s.length() - 1;
    while (i >= 0) {
      while (i >= 0 && s[i] == ' ')  { i--; }
      if (i < 0) { break; }

      string word = "";
      while (i >= 0 && s[i] != ' ') { word.push_back(s[i--]); }
      reverse(word.begin(), word.end());

      if (!res.empty()) { res.push_back(' '); }
      res.append(word);
    }

    s = res;
  }
};
