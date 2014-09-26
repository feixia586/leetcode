#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
  vector<int> grayCode(int n) {
    vector<int> res;
    unsigned int num = pow(2, n);
    for (unsigned int i = 0; i < num; i++) {
      res.push_back(binary2Gray(i));
    }

    return res;
  }

  //http://en.wikipedia.org/wiki/Gray_code#Converting_to_and_from_Gray_code
  unsigned int binary2Gray(unsigned int num) {
    return num ^ (num >> 1);
  }
};
