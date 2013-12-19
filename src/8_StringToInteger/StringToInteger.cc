#include <climits>
class Solution {
public:
  int atoi(const char *str) {
    int res = 0;
    int digit = 0;
    int sign = 1;
    int p = 0;

    // skip the initial whitespace
    while (str[p] == ' ') p++;

    // take the optional plus or minus sign
    if (str[p] == '+') { sign = 1; p++; }
    else if(str[p] == '-') {sign = -1; p++; }

    // INT_MAX = 2147483647; INT_MIN = -2147483648
    for ( ; str[p] != 0; p++) {
      if (str[p] < '0' || str[p] > '9')
        break;

      digit = str[p] - '0';
      if (res > 214748365 || (res == 214748364 && digit > 7))
        return sign > 0 ? INT_MAX : INT_MIN;

      res = res * 10  + digit;
    }

    res *= sign;
    return res;
  }
};
