#include <vector>

using namespace std;

class Solution {
public:
  vector<vector<int> > combine(int n, int k) {
    vector<vector<int> > res;
    if (n == 0 || k == 0 || k > n) {
      return res;
    }

    vector<int> part;
    combineHelper(res, part, n, 1, k);

    return res;
  }

  void combineHelper(vector<vector<int> > &res, vector<int> &part, int n, int pos, int k) {
    if ((int)part.size() == k) {
      res.push_back(part);
      return;
    }

    for (int i = pos; i <= n; i++) {
      part.push_back(i);
      combineHelper(res, part, n, i + 1, k);
      part.pop_back();
    }
  }
};
