#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
  vector<int> plusOne(vector<int> &digits) {
    int size = digits.size();
    assert(size > 0);

    vector<int> res;
    int carry = 1;
    for (int i = size - 1; i >= 0; i--) {
      int tmp = digits[i] + carry;
      digits[i] = tmp % 10;
      carry = tmp / 10;
    }

    if (carry > 0) res.push_back(carry);
    res.insert(res.end(), digits.begin(), digits.end());

    return res;
  }
};
