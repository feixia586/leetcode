#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  int numDistinct(string S, string T) {
    // state: num[i][j] -> num of subsequence: first i characters of S, first j characters of T
    // function: num[i][j] = num[i-1][j] (+ num[i-1][j-1] if ith of S == jth of T)
    // init: num[i][0] = 1, others 0
    // answer: num[S.length()][T.length()]

    int lenS = S.length(), lenT = T.length();
    if (lenS == 0 || lenT == 0) {
      return 0;
    }

    vector<vector<int> > num(lenS + 1, vector<int>(lenT + 1, 0));
    for (int i = 0; i <= lenS; i++) {
      num[i][0] = 1;
    }

    for (int i = 1; i <= lenS; i++) {
      for (int j = 1; j <= lenT; j++) {
        num[i][j] = num[i-1][j];
        if (S[i-1] == T[j-1]) {
          num[i][j] += num[i-1][j-1];
        }
      }
    }

    return num[lenS][lenT];
  }
};
