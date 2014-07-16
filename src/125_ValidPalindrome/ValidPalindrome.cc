#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
  bool isPalindrome(string s) {
    int len = s.length();
    if (len == 0) {
      return true;
    }

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int low = 0, high = len - 1;
    while (low < high) {
      if (!isAlphanumeric(s[low])) {
        low++;
      } else if (!isAlphanumeric(s[high])) {
        high--;
      } else {
        if (s[low] == s[high]) {
          low++;
          high--;
        } else {
          return false;
        }
      }
    }

    return true;
  }

  bool isAlphanumeric(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
      return true;
    }

    return false;
  }
};
