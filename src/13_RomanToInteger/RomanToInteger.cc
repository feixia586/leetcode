#include <string>
#include <map>

using namespace std;

class Solution {
public:
  // We assume that the input is a valid roman number
  // The idea is to go through the string in reverse order
  int romanToInt(string s) {
    int res = 0;
    int len = s.length();
    map<char, int> dict;
    dict['I'] = 1;
    dict['V'] = 5;
    dict['X'] = 10;
    dict['L'] = 50;
    dict['C'] = 100;
    dict['D'] = 500;
    dict['M'] = 1000;

    if (len == 0)
      return res;

    res = dict[s[len-1]];
    if (len == 1)
      return res;

    for (int i = len-2; i >= 0; i--) {
      if(dict[s[i]] >= dict[s[i+1]])
        res += dict[s[i]];
      else
        res -= dict[s[i]];
    }

    return res;
  }
};
