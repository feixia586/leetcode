#include <string>

using namespace std;

class Solution {
public:
  string convert(string s, int nRows) {
    if (nRows == 1)
      return s;

    string res_str = "";
    int len = s.length();
    string* str_arr = new string[nRows];
    for (int i = 0; i < nRows; i++)
      str_arr[i] = "";

    // For the first row
    int k = 0;
    while(1) {
      int idx = (k++) * (2 * nRows - 2);
      if (idx >= len)
        break;
      str_arr[0] += s[idx];
    }

    // For the rows in middle
    for (int i = 1; i < nRows-1; i++) {
      k = 0;
      while(1) {
        int idx = k * (2 * nRows - 2) + i;
        if(idx >= len)
          break;
        str_arr[i] += s[idx];

        idx = ((k++) + 1) * (2 * nRows - 2) - i;
        if(idx >= len)
          break;
        str_arr[i] += s[idx];
      }
    }

    // For the last row
    k = 0;
    while(1) {
      int idx = (k++) * (2 * nRows - 2)  + (nRows - 1);
      if(idx >= len)
        break;
      str_arr[nRows - 1] += s[idx];
    }

    for (int i = 0; i < nRows; i++) {
      res_str += str_arr[i];
    }

    delete []str_arr;

    return res_str;
  }
};
