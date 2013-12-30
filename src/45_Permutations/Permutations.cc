#include <vector>

using namespace std;

class Solution {
public:
  vector<vector<int> > permute(vector<int> &num) {
    vector<vector<int> > res;
    backtrack(num, 0, res);
    return res;
  }

  void backtrack(vector<int> num, int k, vector<vector<int> > &res) {
    int size = num.size();
    if (k == size) {
      res.push_back(num);
      return;
    }

    for (int i = k; i < size; i++) {
      swap(num[i], num[k]);
      backtrack(num, k+1, res);
      swap(num[k], num[i]);
    }
  }
};
