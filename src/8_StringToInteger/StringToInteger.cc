#include <iostream>
#include <climits>

using namespace std;

class Solution {
  public:
    int atoi(const char *str) {
      if (str == NULL) {
        return 0;
      }

      int res = 0;
      int i = 0, sign = 1;
      while (str[i] != 0 && str[i] == ' ') {
        i++;
      }

      if (str[i] == '+') { sign = 1; i++; } 
      else if (str[i] == '-') { sign = -1; i++; } 
      if (!isDigit(str[i])) { return 0; }

      for ( ; str[i] != 0; i++) {
        if (!isDigit(str[i])) {
          break;
        }

        int digit = str[i] - '0';
        if (res >= INT_MAX / 10 + 1 || (res == INT_MAX / 10 && digit > INT_MAX % 10)) {
          return sign > 0 ? INT_MAX : INT_MIN;
        }
        res = res * 10 + digit;
      }

      res *= sign;

      return res;
    }

    bool isDigit(char ch) {
      if (ch >= '0' && ch <= '9') {
        return true;
      } else {
        return false;
      }
    }
};
