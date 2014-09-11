#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

class Solution {
public:
  vector<int> plusOne(vector<int> &digits) {
    assert(digits.size() > 0);

    int size = digits.size();
    int carry = 1;
    vector<int> res;
    for (int i = size - 1; i >= 0; i--) {
      int sum = digits[i] + carry;
      carry = sum / 10;
      res.push_back(sum % 10);
    }

    if (carry > 0) {
      res.push_back(carry);
    }

    reverse(res.begin(), res.end());

    return res;
  }
};
