#include <string>
using namespace std;

class Solution {
public:
  string longestPalindrome(string s) {
    // return brute_force(s);
    return DP_method(s);
    // return Center_Method(s);
  }

/****************************************************************************
 * Brute Force solution. Time O(n^3)
 ****************************************************************************/
  string brute_force(const string& s) {
    int len = s.length();
    string res_str = "";
    int res_len = 0;
    int res_begin = 0;

    for (int i = 0; i < len; i++) {
      for (int j = i; j < len; j++) {
        if (verify_palindrome(s, i, j)) {
          if (res_len < j - i + 1) {
            res_len = j - i + 1;
            res_begin = i;
          }
        }
      }
    }

    // if s = "", then s.substr(0, any_value) = "". So don't worry
    res_str = s.substr(res_begin, res_len);
    return res_str;
  }
  // verify whether s[i...j] is palindrome
  bool verify_palindrome(const string& s, int i, int j) {
    while(i < j) {
      if (s[i] != s[j])
        return false;

      i++;
      j--;
    }

    return true;
  }

/****************************************************************************
 * Dynamic Programming. Time O(n^2); Space O(n^2)
 ****************************************************************************/
  string DP_method(const string& s) {
    int len = s.length();
    string res_str = "";
    int res_len = 0;
    int res_begin = 0;
    bool table[1000][1000] = { false }; // Assume s.length() <= 1000

    for (int i = 0; i < len; i++) {
      table[i][i] = true;
    }
    res_len = 1;
    res_begin = 0;


    for (int i = 0; i < len - 1; i++) {
      int j = i + 1;
      if (s[i] == s[j]){
        table[i][j] = true;
        res_len = 2;
        res_begin = i;
      }
    }

    for (int l = 3; l <= len; l++) {
      for (int i = 0; i < len - l + 1; i++) {
        int j = i + l - 1;
        if(s[i] == s[j] && table[i+1][j-1] == true) {
          table[i][j] = true;
          res_len = l;
          res_begin = i;
        }
      }
    }

    res_str = s.substr(res_begin, res_len);
    return res_str;
  }

/****************************************************************************
 * There is center in palindrome, expand it. Time O(n^2); Space O(1)
 ****************************************************************************/
  string Center_Method(const string& s) {
    int len = s.length();
    if (len == 0)
      return "";

    string res_str = s.substr(0, 1);
    // Note that there are 2N-1 centers. Two characters can become a center.
    for (int i = 0; i < len-1; i++) {
      string tmp = expand_around_center(s, i, i);
      res_str = res_str.length() < tmp.length() ? tmp : res_str;

      tmp = expand_around_center(s, i, i+1);
      res_str = res_str.length() < tmp.length() ? tmp : res_str;
    }

    return res_str;
  }

  string expand_around_center(const string& s, int c1, int c2) {
    int len = s.length();
    while (c1 >= 0 && c2 <= len-1) {
      if (s[c1] != s[c2])
        break;
      c1--;
      c2++;
    }

    c1++;
    c2--;
    return s.substr(c1, c2-c1+1);
  }

};
