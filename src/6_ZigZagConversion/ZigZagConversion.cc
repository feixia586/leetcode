#include <string>

using namespace std;

class Solution {
  public:
    string convert(string s, int nRows) {
      if (nRows <= 1) {
        return s;
      }

      string res;
      int len = s.length();
      for (int i = 0; i < nRows; i++) {
        for (int j = 0, idx = i; idx < len; j++, idx = i + (nRows - 1) * 2 * j) {
          res.push_back(s[idx]); // '|' direction

          if (i == 0 || i == nRows - 1) {
            continue;
          }

          int diagIdx = idx + (nRows - i - 1)  * 2;
          if (diagIdx < len) {
            res.push_back(s[diagIdx]); // '/' direction
          }
        }
      }

      return res;
    }
};
