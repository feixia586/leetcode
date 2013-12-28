#include <string>
#include <sstream>
#include <cassert>

using namespace std;

class Solution {
public:
  string countAndSay(int n) {
    assert(n >= 1);
    string res = "1";
    for (int i = 1; i < n; i++) {
      res = getNextString(res);
    }

    return res;
  }

  string getNextString(string str) {
    int len = str.length();
    string ret = "";
    int i = 0;
    while(i < len) {
      int count = 1;
      // Note: Short-circuit evaluation is guaranteed for C and C++, unless you
      // overload these operators
      while(i < len - 1 && str[i] == str[i+1]) {
        count++;
        i++;
      }
      stringstream ss;
      ss << count;
      ret += ss.str();
      ret += str[i];
      i++;
    }

    return ret;
  }
};
