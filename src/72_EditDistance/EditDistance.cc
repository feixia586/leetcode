#include <vector>
#include <string>

using namespace std;

class Solution {
public:
  int minDistance(string word1, string word2) {
    // state: dis[i][j] -> edit distance for first i of word1 and first j of word2
    // function: dis[i][j] = dis[i-1][j-1] if ith of word1 == jth of word2
    //                     = 1 + min(dis[i-1][j-1], dis[i-1][j], dis[i][j-1])
    // init: dis[i][0] = i, dis[0][j] = j
    // answer: dis[word1.length()][word2.length()]

    int len1 = word1.length(), len2 = word2.length();
    vector<vector<int> > dis(len1 + 1, vector<int>(len2 + 1, 0));

    for (int i = 0; i <= len1; i++) {
      dis[i][0] = i;
    }
    for (int j = 0; j <= len2; j++) {
      dis[0][j] = j;
    }

    for (int i = 1; i <= len1; i++) {
      for (int j = 1; j <= len2; j++) {
        if (word1[i-1] == word2[j-1]) {
          dis[i][j] = dis[i-1][j-1];
        } else {
          dis[i][j] = 1 + min(dis[i-1][j-1], min(dis[i-1][j], dis[i][j-1]));
        }
      }
    }

    return dis[len1][len2];
  }
};
