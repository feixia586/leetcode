#include <vector>

using namespace std;

class Solution {
public:
  vector<vector<int> > permuteUnique(vector<int> &num) {
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
      bool sig = false;
      for (int p = k; p < i; p++) {
        if (num[p] == num[i])
          sig = true;;
      }
      if (sig) continue;

      swap(num[i], num[k]);
      backtrack(num, k+1, res);
      swap(num[k], num[i]);
    }
  }
};
