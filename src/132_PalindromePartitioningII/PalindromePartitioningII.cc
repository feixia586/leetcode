#include <string>
#include <climits>
#include <vector>

using namespace std;

class Solution {
public:
  int minCut(string s) {
    // state: f[i] -> min cut for first i characters
    // function: f[i] = min{ f[j] + 1, j < i && j+1~i is palindrome}
    // init: f[0] = 0
    // answer: f[s.length()] - 1

    int len = s.length();
    if (len == 0) {
      return 0;
    }

    vector<vector<bool> > ispm = getPalindrome(s);
    vector<int> num(s.length() + 1, INT_MAX);
    num[0] = 0;
    for (int i = 1; i <= len; i++) {
      for (int j = 0; j < i; j++) {
        // this condition will be timeout
        //if (isPalindrome(s.substr(j, i-j))) {
        if (ispm[j][i-1]) {
          num[i] = num[i] > num[j] + 1 ? num[j] + 1 : num[i];
        }
      }
    }

    return num[s.length()] - 1;
  }

  // Another DP to memorize whether s[i..j] is palindrome
  vector<vector<bool> > getPalindrome(string &s) {
    int len = s.length();
    vector<vector<bool> > ispm(len, vector<bool>(len, false));
    for (int i = 0; i < len; i++) {
      ispm[i][i] = true;
    }
    for (int i = 0; i < len-1; i++) {
      if (s[i] == s[i+1]) {
        ispm[i][i+1] = true;
      } else {
        ispm[i][i+1] = false;
      }
    }

    for (int length = 3; length <= len; length++) {
      for (int start = 0; start + length - 1 < len; start++) {
        ispm[start][start+length-1] = ispm[start+1][start+length-2] && (s[start] == s[start+length-1]);
      }
    }

    return ispm;
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
