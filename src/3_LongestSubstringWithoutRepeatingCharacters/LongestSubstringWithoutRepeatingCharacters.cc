#include <string>

using namespace std;

class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int res = 0;
    size_t p_slow = 0, p_quick = 0;
    bool visited[256] = {false}; // since there are 256 characters in extended ASCII
    while(p_quick < s.length()) {
      if(!visited[(int)s[p_quick]]) {
        visited[(int)s[p_quick++]] = true;
      } else {
        int tmp_res = p_quick - p_slow;
        res = res > tmp_res ? res : tmp_res;
        while(s[p_slow] != s[p_quick])
          visited[(int)s[p_slow++]] = false;
        p_slow++;
        p_quick++;
      }
    }

    int tmp_res = p_quick - p_slow;
    res = res > tmp_res ? res : tmp_res;
    return res;
  }
};
