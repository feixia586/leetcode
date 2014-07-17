#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  bool isScramble(string s1, string s2) {
    //return isScrambleRecr(s1, s2);
    return isScrambleDP(s1, s2);
  }

  /*********************************************************************
   * DP Method
   *********************************************************************/
  bool isScrambleDP(string s1, string s2) {
    if (s1.length() != s2.length()) {
      return false;
    }
    if (s1 == s2) {
      return true;
    }

    int len = s1.length();
    // canT[k][i][j] represents whether s1[i..i+k] can be transformed to s2[j..j+k]
    vector<vector<vector<bool> > > canT(len, vector<vector<bool>>(len, vector<bool>(len, false)));

    // init
    for (int i = 0; i < len; i++) {
      for (int j = 0; j < len; j++) {
        canT[0][i][j] = (s1[i] == s2[j]);
      }
    }

    for (int l = 2; l <= len; l++) {    // length of substring
      for (int i = len - l; i >= 0; i--) {    // s1[i..i+l-1]
        for (int j = len - l; j >= 0; j--) {    // s2[j..j+l-1]
          bool canTrans = false;
          for (int m = 1; m < l; m++) {   // separate the substring
            canTrans = (canT[m-1][i][j] && canT[l-m-1][i+m][j+m]) ||
              (canT[m-1][i][j+l-m] && canT[l-m-1][i+m][j]);

            if (canTrans) { break; }
          }

          canT[l-1][i][j] = canTrans;
        }
      }
    }

    return canT[len-1][0][0];
  }

  /*********************************************************************
   * Recursion Method
   *********************************************************************/
  bool isScrambleRecr(string s1, string s2) {
    if (s1.length() != s2.length()) {
      return false;
    }
    if (s1 == s2) {
      return true;
    }

    // branch cut
    int len = s1.length();
    vector<int> A(256, 0);
    for (int i = 0; i < len; i++) {
      A[s1[i]]++;
      A[s2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
      if (A[i] != 0) { return false; }
    }

    // Do the matching
    for (int i = 1; i < len; i++) {
      string s11 = s1.substr(0, i);
      string s12 = s1.substr(i);

      // first-first, second-second
      string s21 = s2.substr(0, i);
      string s22 = s2.substr(i);
      if (isScrambleRecr(s11, s21) && isScrambleRecr(s12, s22)) {
        return true;
      }

      // first-second, second-first
      s21 = s2.substr(0, len - i);
      s22 = s2.substr(len - i);
      if (isScrambleRecr(s11, s22) && isScrambleRecr(s12, s21)) {
        return true;
      }
    }

    return false;
  }


};
