#include <iostream>
#include <assert.h>

using namespace std;

class Solution {
public:
  bool isMatch(const char *s, const char *p) {
    assert(s != NULL && p != NULL);
    if (*p == 0)
      return *s == 0;

    // if the next character is not '*'
    if (*(p+1) != '*') {
      // note that we need to make sure (*s ! = 0)
      bool cond1 = (*s == *p || *p == '.');
      bool cond2 = (*s != 0) && isMatch(s+1, p+1);
      return cond1 && cond2;
    }

    // if the next character is '*'
    // note that we need to make sure (*s ! = 0)
    while((*s == *p || *p == '.') && (*s != 0)) {
      if(isMatch(s, p+2))
        return true;
      s++;
    }

    return isMatch(s, p+2);
  }
};
