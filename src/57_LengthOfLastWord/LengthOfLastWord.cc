#include <iostream>

class Solution {
public:
  int lengthOfLastWord(const char *s) {
    if (s == NULL) return 0;
    if (s[0] == 0) return 0;

    int end = 0, p = 0, q = 0;
    while (s[end] != 0) end++;

    q = end - 1;
    while (q >= 0 && s[q] == ' ') q--;

    p = q;
    while (p >= 0 && s[p] != ' ') p--;

    return (q-p);
  }
};
