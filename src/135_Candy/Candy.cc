#include <vector>

using namespace std;

class Solution {
public:
  int candy(vector<int> &ratings) {
    int size = ratings.size();
    if (size == 0) {
      return 0;
    }

    vector<int> left(size, 1);
    vector<int> right(size, 1);
    for (int i = 1; i < size; i++) {
      if (ratings[i] > ratings[i-1]) {
        left[i] = left[i - 1] + 1;
      }
    }
    for (int i = size - 2; i >= 0; i--) {
      if (ratings[i] > ratings[i + 1]) {
        right[i] = right[i + 1] + 1;
      }
    }

    int res = 0;
    for (int i = 0; i < size; i++) {
      res += max(left[i], right[i]);
    }
    return res;
  }
};
