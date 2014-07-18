#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
  // line 18, 37, 38, 44-46 is used for branch cut
  vector<string> wordBreak(string s, unordered_set<string> &dict) {
    vector<string> res;
    vector<string> parts;

    if (s.length() == 0 || dict.size() == 0) {
      return res;
    }

    vector<bool> possible(s.length() + 1, true); // used for branch cut

    wordBreakHelper(res, parts, 0, s, dict, possible);
    return res;
  }

  void wordBreakHelper(vector<string> &res, vector<string> &parts, int pos, string s, unordered_set<string> &dict, vector<bool> &possible) {
    int len = s.length();
    if (pos >= len) {
      if (parts.size() == 0) return;
      string str = parts[0];
      for (size_t i = 1; i < parts.size(); i++) {
        str = str + " " + parts[i];
      }
      res.push_back(str);
    }

    for (int i = pos; i < len; i++) {
      string sub = s.substr(pos, i - pos + 1);
      if (dict.find(sub) != dict.end() && possible[i + 1]) {
        int beforeChange = res.size();

        parts.push_back(sub);
        wordBreakHelper(res, parts, i + 1, s, dict, possible);
        parts.pop_back();

        if ((int)res.size() == beforeChange) {
          possible[i + 1] = false;
        }
      }
    }
  }
};
