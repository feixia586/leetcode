#include <string>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
  string addBinary(string a, string b) {
    int lenA = a.length(), lenB = b.length();
    assert(lenA != 0 && lenB != 0);

    vector<char> res_vec;
    string res = "";
    int carry = 0;
    int p = lenA - 1, q = lenB - 1;
    while(p >= 0 || q >= 0) {
      int tmp;
      if (p >= 0 && q >= 0)
        tmp = (a[p--] - '0') + (b[q--] - '0') + carry;
      else if (p >= 0)
        tmp = (a[p--] - '0') + carry;
      else
        tmp = (b[q--] - '0') + carry;

      int val = tmp % 2;
      carry = tmp / 2;
      res_vec.push_back(char(val + '0'));
    }

    if (carry > 0) res_vec.push_back(char(carry+'0'));

    int size = res_vec.size();
    for (int i = size-1; i >= 0; i--) res+= res_vec[i];
    return res;
  }
};
