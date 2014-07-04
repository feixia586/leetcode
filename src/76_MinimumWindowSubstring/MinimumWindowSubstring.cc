#include <climits>
#include <string>

using namespace std;

class Solution {
public:
  string minWindow(string S, string T) {
    if (S.length() == 0 || T.length() == 0) {
      return "";
    }

    int slen = S.length(), tlen = T.length();
    int needToFind[256] = {}, hasFound[256] = {};
    for (int i = 0; i < tlen; i++) {
      needToFind[T[i]]++;
    }

    int count = 0;
    int minWindowSize = INT_MAX, minLow = 0, minHigh = 0;
    for (int low = 0, high = 0; high < slen; high++) {
      if (needToFind[S[high]] == 0) { continue; }
      hasFound[S[high]]++;
      if (hasFound[S[high]] <= needToFind[S[high]]) { count++; }

      if (count == tlen) {
        while (needToFind[S[low]] == 0 || hasFound[S[low]] > needToFind[S[low]]) {
          if (hasFound[S[low]] > needToFind[S[low]]) {
            hasFound[S[low]]--;
          }

          low++;
        }

        int tmp = high - low + 1;
        if (tmp < minWindowSize) {
          minLow = low;
          minHigh = high;
          minWindowSize = tmp;
        }
      }
    }

    if (count == tlen) {
      return S.substr(minLow, minHigh - minLow + 1);
    } else {
      return "";
    }
  }
};
