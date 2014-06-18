#include <vector>
#include <string>

using namespace std;

class Solution {
public:
  int numDecodings(string s) {
    // state: f[i] -> num of decode ways for first i characters
    // function: f[i] = f[i-1] (if ith of s is valid) + f[i-2] (if i-1th and ith of s is valid)
    // init: f[0] = 1, f[1] = 1 if 1th of s is valid
    // answer: f[s.length()]

    int len = s.length();
    if (len == 0) {
      return 0;
    }

    vector<int> num(len + 1, 0);
    num[0] = 1;
    num[1] = s[0] != '0' ? 1 : 0;
    for (int i = 2; i <= len; i++) {
      if (s[i-1] != '0') {
        num[i] = num[i-1];
      }

      int val = (s[i-2] - '0') * 10 + (s[i-1] - '0');
      if (val >= 10 && val <= 26) {
        num[i] += num[i-2];
      }
    }

    return num[len];
  }
};
