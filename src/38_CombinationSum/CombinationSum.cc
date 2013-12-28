#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
  vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<int> chosen;
    vector<vector<int> > res;
    backtrack(candidates, target, 0, chosen, res);
    return res;
  }

  void backtrack(const vector<int> &candidates, int diff, int start, vector<int> &chosen, vector<vector<int> > &res) {
    if (diff == 0) {
      res.push_back(chosen);
      return;
    }

    int size = candidates.size();
    for (int i = start; i < size; i++) {
      if (diff < candidates[i])
        return;

      chosen.push_back(candidates[i]);
      backtrack(candidates, diff-candidates[i], i, chosen, res);
      chosen.pop_back();
    }
  }
};
