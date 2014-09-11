#include <string>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
  string addBinary(string a, string b) {
    vector<int> res_vec;
    string res_str = "";

    int aLen = a.length(), bLen = b.length();
    int ap = aLen - 1, bp = bLen - 1;

    int carry = 0;
    while (ap >= 0 && bp >= 0) {
      int sum = (a[ap--] - '0') + (b[bp--] - '0') + carry;
      int val = sum % 2;
      carry = sum / 2;
      res_vec.push_back(val);
    }

    while (ap >= 0) {
      int sum = (a[ap--] - '0') + carry;
      carry = sum / 2;
      res_vec.push_back(sum % 2);
    }

    while (bp >= 0) {
      int sum = (b[bp--] - '0') + carry;
      carry = sum / 2;
      res_vec.push_back(sum % 2);
    }
    res_vec.push_back(carry);

    while (res_vec.size() > 1 && res_vec.back() == 0) { res_vec.pop_back(); }
    for (int i = res_vec.size() - 1; i >= 0; i--) {
      res_str += (res_vec[i] + '0');
    }


    return res_str;
  }
};
