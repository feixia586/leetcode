#include <iostream>

class Solution {
public:
  bool isNumber(const char *s) {
    if (s == NULL || s[0] == 0) return false;

    char sym[] = {'.', 'e'};
    int count[] = {0, 0};

    int p = 0;
    while(s[p] == ' ') p++;
    if (s[p] == 0) return false;

    while(s[p] != 0) {
      if (s[p] >= '0' && s[p] <= '9') p++;
      else if (s[p] == sym[0]) {count[0]++; p++; }
      else if (s[p] == sym[1]) {count[1]++; p++; }
      else return false;
    }

    if (count[0] <=1 && count[1] <= 1)
      return true;
    else
      return false;
  }
};
