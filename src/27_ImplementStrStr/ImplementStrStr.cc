#include <iostream>
#include <cstring>

class Solution {
public:
  char *strStr(char *haystack, char *needle) {
    if (haystack == NULL || needle == NULL) {
      return NULL;
    }

    int lenH = strlen(haystack);
    int lenN = strlen(needle);

    for (int i = 0; i < lenH - lenN + 1; i++) {
      int j = 0;
      for (j = 0; j < lenN; j++) {
        if (haystack[i + j] != needle[j]) {
          break;
        }
      }

      if (j == lenN) {
        return haystack + i;
      }
    }

    return NULL;
  }
};
