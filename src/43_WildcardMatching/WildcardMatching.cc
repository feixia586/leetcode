class Solution {
public:
  bool isMatch(const char *s, const char *p) {
    // return isMatch_recursive(s, p);
    return isMatch_regular(s, p);
  }
  /************************************************************
   * Recommended Method
   ************************************************************/
  bool isMatch_regular(const char *s, const char *p) {
    if (*p == 0) return *s == 0;

    const char *ps = 0, *star = 0;
    while (*s != 0) {
      if (*s == *p || *p == '?') { s++; p++;}
      else if (*p == '*') {
        while (*p == '*') p++;      // skip the consecutive '*'
        if (*p == 0) return true;   // match if ends with '*'
        star = p;
        ps = s;
      }
      else if (*s != *p && star) { s = ++ps; p = star; }
      else return false;
    }

    while(*p == '*') p++;       // check if the last part is made up by '*'
    if(*p != 0) return false;
    else return true;
  }

  /************************************************************
   * Recursive method -- Time out
   ************************************************************/
  bool isMatch_recursive(const char *s, const char *p) {
    if (*p == 0) return *s == 0;

    if (*p != '*') {
      bool cond1 = (*s != 0) && (*s == *p || *p == '?');
      bool cond2 = isMatch(s+1, p+1);
      return cond1 && cond2;
    }

    while(*p == '*') p++;       // skip the consecutive '*'
    if(*p == 0) return true;    // match if ends with '*'
    while (*s != 0) {
      if (isMatch(s, p))
        return true;
      s++;
    }

    return false;
  }
};
