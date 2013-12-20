#include <string>

using namespace std;

class Solution {
public:
  string intToRoman(int num) {
    string res = "";

    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string roman_digit[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    int k = 0;
    while(num > 0) {
      int quotient = num / val[k];
      num -= quotient * val[k];

      for ( ; quotient > 0; quotient--)
        res += roman_digit[k];

      k++;
    }

    return res;
  }
};
