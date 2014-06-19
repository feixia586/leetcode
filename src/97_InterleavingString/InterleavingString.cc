#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  bool isInterleave(string s1, string s2, string s3) {
    // state: dp[i][j] -> first i+j of s3 is interleaved by first i of s1 and first j of s2
    // function: dp[i][j] = (dp[i-1][j] && (ith of s1 == i+jth of s3)) || (dp[i][j-1] && (jth of s2 == i+jth of s3))
    // init: dp[0][0] = true; dp[i][0] = dp[i-1][0] && (ith of s1 == ith of s3); dp[0][j] = dp[0][j-1] && (jth of s2 == jth of s3)
    // answer: dp[s1.length()][s2.length()]

    int len1 = s1.length(), len2 = s2.length(), len3 = s3.length();
    if (len1 + len2 != len3) {
      return false;
    }

    vector<vector<bool> > dp(len1 + 1, vector<bool>(len2 + 1, false));
    dp[0][0] = true;
    for (int i = 1; i <= len1; i++) {
      dp[i][0] = dp[i-1][0] && (s1[i-1] == s3[i-1]);
    }
    for (int j = 1; j <= len2; j++) {
      dp[0][j] = dp[0][j-1] && (s2[j-1] == s3[j-1]);
    }

    for (int i = 1; i <= len1; i++) {
      for (int j = 1; j <= len2; j++) {
        dp[i][j] = (dp[i-1][j] && (s1[i-1] == s3[i+j-1])) || (dp[i][j-1] && (s2[j-1] == s3[i+j-1]));
      }
    }

    return dp[len1][len2];
  }
};
