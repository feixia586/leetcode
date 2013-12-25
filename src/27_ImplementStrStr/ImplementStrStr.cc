#include <iostream>
#include <cstring>

class Solution {
public:
  char *strStr(char *haystack, char *needle) {
    //return brute_force_1(haystack, needle);
    return brute_force_2(haystack, needle);
  }

  /**********************************************************
   * Brute force method 1. Time O((n-m+1)*m)
   **********************************************************/
  char* brute_force_1(char* haystack, char* needle) {
    if (haystack == NULL || needle == NULL)
      return NULL;
    if (!(*needle))
      return haystack;

    char *p = haystack, *q = needle;
    char *pBegin = haystack;

    char* sig = haystack;
    while(*(++q)) sig++;

    while (*sig) {
      p = pBegin;
      q = needle;
      while (*p && *q && *p == *q) {
        p++;
        q++;
      }
      if (*q == 0)
        return pBegin;
      else {
        pBegin++;
        sig++;
      }
    }

    return NULL;
  }

  /**********************************************************
   * Brute force method 2. Time O((n-m+1)*m)
   **********************************************************/
  char* brute_force_2(char *haystack, char *needle) {
    if (haystack == NULL || needle == NULL)
      return NULL;
    if (!(*needle))
      return haystack;

    int n = strlen(haystack);
    int m = strlen(needle);
    int p = 0, q = 0;
    while (p  < n-m+1) {
      q = 0;
      while (q < m && haystack[p] == needle[q]) {
        p++;
        q++;
      }
      if (q == m)
        return haystack+(p-q);
      else
        p = p - q + 1;
    }

    return NULL;
  }

};
