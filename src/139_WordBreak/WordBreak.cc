#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
  bool wordBreak(string s, unordered_set<string> &dict) {
    // return DP_1(s, dict);
    return DP_2(s, dict);
  }

  /**************************************************************
   * DP_1: Time O(n^2)
   **************************************************************/
  bool DP_1(string s, unordered_set<string> &dict) {
    // state: f[i] -> first i characters ?
    // function: f[i] = Or{ f[j], j < i && j+1~i is in dict}
    // init: f[0] = true, f[1..n] = false
    // answer: f[s.length()]

    int len = s.length();
    if (len == 0) {
      return true;
    }

    vector<bool> canBreak(len + 1, false);
    canBreak[0] = true;

    for (int i = 1; i <= len; i++) {
      for (int j = 0; j < i; j++) {
        if (canBreak[j] && dict.find(s.substr(j, i-j)) != dict.end()) {
          canBreak[i] = true;
          break;
        }
      }
    }

    return canBreak[len];
  }

  /**************************************************************
   * DP_2: Time O(nm), where m is the max length of words in dict
   **************************************************************/
  bool DP_2(string s, unordered_set<string> &dict) {
    int len = s.length();
    if (len == 0) {
      return true;
    }

    int maxLen = getMaxLength(dict);
    vector<bool> canBreak(len + 1, false);
    canBreak[0] = true;

    for (int i = 1; i <= len; i++) {
      int begin = max(0, i - maxLen);
      for (int j = begin; j < i; j++) {
        if (canBreak[j] && dict.find(s.substr(j, i-j)) != dict.end()) {
          canBreak[i] = true;
          break;
        }
      }
    }

    return canBreak[len];
  }

  int getMaxLength(unordered_set<string> &dict) {
    size_t maxLength = 0;
    for (auto iter = dict.begin(); iter != dict.end(); ++iter) {
      maxLength = max(maxLength, (*iter).length());
    }

    return maxLength;
  }
};
